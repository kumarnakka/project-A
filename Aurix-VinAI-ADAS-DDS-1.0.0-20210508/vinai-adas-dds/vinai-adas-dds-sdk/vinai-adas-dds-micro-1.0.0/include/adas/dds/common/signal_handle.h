/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_signal_handle
#define H_adas_dds_signal_handle

#include <signal.h>

#include <atomic>
#include <functional>

namespace adas_dds {

namespace execution {

void default_signal_handler(int signal);
bool getRunState();

class SignalHandle {
   public:
    explicit SignalHandle(__sighandler_t handler = default_signal_handler) {
        struct sigaction action = {};
        action.sa_handler = handler;

        sigaction(SIGHUP, &action, NULL);   // controlling terminal closed, Ctrl-D
        sigaction(SIGINT, &action, NULL);   // Ctrl-C
        sigaction(SIGQUIT, &action, NULL);  // Ctrl-\, clean quit with core dump
        sigaction(SIGABRT, &action, NULL);  // abort() called.
        sigaction(SIGTERM, &action, NULL);  // kill command
    }

    ~SignalHandle() = default;
};

}  // namespace execution

}  // namespace adas_dds

#endif  // H_adas_dds_signal_handle
