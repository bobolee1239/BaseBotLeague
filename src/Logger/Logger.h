#ifndef LOGGER_H
#define LOGGER_H

#include <cstdio>

#define LOG_BASE(level, msg)                \
    do {                                    \
        printf("[BaseBot][%s] %s\n", level, msg);     \
    } while (0)

#ifdef ENABLE_DEBUG_LOG
#define LOG_D(msg)  LOG_BASE("DEBUG", msg)
#else 
#define LOG_D(msg) 
#endif // ENABLE_DEBUG_LOG

#ifdef ENABLE_INFORMATION_LOG
#define LOG_I(msg)  LOG_BASE("INFO", msg)
#else 
#define LOG_I(msg) 
#endif // ENABLE_INFORMATION_LOG

#ifdef ENABLE_ERROR_LOG
#define LOG_E(msg)  LOG_BASE("ERROR", msg)
#else 
#define LOG_E(msg) 
#endif // ENABLE_ERROR_LOG

#endif // !LOGGER_H