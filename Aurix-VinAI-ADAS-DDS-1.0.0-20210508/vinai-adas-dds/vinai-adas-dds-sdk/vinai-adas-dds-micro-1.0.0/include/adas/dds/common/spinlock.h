/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_spinlock
#define H_adas_dds_common_spinlock

#include <adas_dds/common/processor.h>
#include <adas_dds/common/timestamp.h>

#include <atomic>

namespace adas_dds {

namespace common {

class SpinLock {
   public:
    SpinLock(SpinLock& other) = delete;
    SpinLock(SpinLock&& other) = delete;
    SpinLock& operator=(SpinLock& other) = delete;

    SpinLock(int32_t timeout_us = 0)
        : m_timeout(timeout_us), m_wait(ATOMIC_FLAG_INIT) {
    }

    ~SpinLock() = default;

    inline void setTimeout(int32_t timeout_us) { m_timeout = timeout_us; }

    inline bool lock() {
        auto start = adas_dds::common::getCurrentTimeStamp();

        while (true) {
            if (m_wait.test_and_set() == false)
                return true;

            cpu_relax();

            if (m_timeout > 0) {
                if ((adas_dds::common::getCurrentTimeStamp() - start) >= m_timeout)
                    return false;
            }
        }

        return false;
    }

    inline bool try_lock() {
        return !m_wait.test_and_set();
    }

    void unlock() {
        m_wait.clear();
    }

   private:
    int32_t m_timeout;
    std::atomic_flag m_wait;
};

}  // namespace common

}  // namespace adas_dds

#endif
