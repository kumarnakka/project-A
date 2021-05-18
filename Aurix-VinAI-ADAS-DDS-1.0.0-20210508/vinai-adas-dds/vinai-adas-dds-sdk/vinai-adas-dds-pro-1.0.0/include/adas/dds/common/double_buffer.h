/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_double_buffer
#define H_adas_dds_common_double_buffer

#include <adas/dds/common/processor.h>
#include <sys/time.h>

namespace adas_dds {

namespace common {

template <typename TS, typename TD>
using produce_callback = std::function<void(TD&, TS&)>;

template <typename T>
using consume_callback = std::function<void(T&)>;

template <typename T>
class DoubleBuffer {
   public:
    DoubleBuffer(DoubleBuffer& other) = delete;
    DoubleBuffer(DoubleBuffer&& other) = delete;
    DoubleBuffer& operator=(DoubleBuffer& other) = delete;

    DoubleBuffer(bool do_memcpy = true, int32_t produce_timeout = 5, int32_t consume_timeout = 20)
        : m_inprogress(new T), m_present(new T), m_do_memcpy(do_memcpy), m_produce_timeout(produce_timeout), m_consume_timeout(consume_timeout), m_wait(ATOMIC_FLAG_INIT) {
    }

    virtual ~DoubleBuffer() {
        delete m_inprogress.load();
        delete m_present.load();
    }

    inline T* present(bool do_consume = false) {
        if (do_consume) consume();
        return m_present.load();
    }

    bool produce(const T& src) {
        auto start = gettime();

        bool ret = true;
        while (ret) {
            ret = m_wait.test_and_set();
            if (ret == false) {
                if (m_do_memcpy)
                    memcpy(m_inprogress.load(), &src, sizeof(T));
                else
                    *m_inprogress.load() = src;

                m_has_new_data = true;

                m_wait.clear();
                ret = true;
                break;
            } else {
                cpu_relax();

                if ((gettime() - start) >= m_produce_timeout)
                    ret = false;
            }
        }
        return ret;
    }

    template <typename TS>
    bool produce(const TS& src, produce_callback<TS, T> cb = nullptr) {
        auto start = gettime();

        bool ret = true;
        while (ret) {
            ret = m_wait.test_and_set();
            if (ret == false) {
                if (cb)
                    cb(*m_inprogress.load(), src);

                m_has_new_data = true;

                m_wait.clear();
                ret = true;
                break;
            } else {
                cpu_relax();

                if ((gettime() - start) >= m_produce_timeout)
                    ret = false;
            }
        }
        return ret;
    }

    bool consume(consume_callback<T> cb = nullptr) {
        if (cb)
            cb(*m_present.load());

        auto start = gettime();

        bool ret = true;
        while (ret) {
            ret = m_wait.test_and_set();
            if (ret == false) {
                if (m_has_new_data)
                    m_present = m_inprogress.exchange(m_present);

                m_has_new_data = false;

                m_wait.clear();
                ret = true;
                break;
            } else {
                cpu_relax();

                if ((gettime() - start) >= m_consume_timeout)
                    ret = false;
            }
        }
        return ret;
    }

   private:
    inline int64_t gettime() {
        struct timeval tv;
        gettimeofday(&tv, nullptr);
        return tv.tv_sec * 1000000ll + tv.tv_usec;
    }

   private:
    std::atomic<T*> m_inprogress;
    std::atomic<T*> m_present;
    bool m_has_new_data = false;
    bool m_do_memcpy;
    int32_t m_produce_timeout;
    int32_t m_consume_timeout;

    std::atomic_flag m_wait;
};

}  // namespace common

}  // namespace adas_dds

#endif
