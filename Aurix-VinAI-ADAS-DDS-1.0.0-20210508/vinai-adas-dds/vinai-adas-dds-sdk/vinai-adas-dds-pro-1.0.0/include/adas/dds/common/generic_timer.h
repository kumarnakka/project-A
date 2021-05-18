/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_common_generic_timer
#define H_adas_dds_common_generic_timer

#include <chrono>
#include <functional>
#include <iostream>
#include <thread>

namespace adas_dds {

namespace common {

class Timer {
   public:
    typedef std::chrono::milliseconds Period;
    typedef std::function<void(void)> Callback;

    Timer(const Period &period, Callback cb, bool running = false)
        : m_period(period), m_cb(cb), m_running(running) {
        if (m_running)
            start();
    }

    void start() {
        m_running = true;

        m_thread = std::thread([=]() {
            while (m_running == true) {
                std::this_thread::sleep_for(m_period);
                m_cb();
            }
        });
    }

    void stop() {
        m_running = false;
        m_thread.join();
    }

   private:
    Period m_period;
    Callback m_cb;
    std::thread m_thread;
    bool m_running = false;
};

}  // namespace common

}  // namespace adas_dds

#endif
