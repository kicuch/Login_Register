#pragma once
#ifndef CLOGGER_HPP
#define CLOGGER_HPP

#include <iostream>

inline void logInfo() {}
inline void logWarning() {}
inline void logError() {}
inline void logDebug() {}

// TODO:
// dodac do logów czas i z jakiej klasy i metody i linijka

// czemu to nie działa?
// include/CLogger.hpp:11:71: warning: fold-expressions only available with ‘-std=c++17’ or ‘-std=gnu++17’
// template<typename... Ts>
// void logInfo(Ts&&...args)
// {
//     ((std::cout << "[INFO] " << std::forward<Ts>(args) << std::endl), ...);
// }

template <typename First, typename... Rest>
void logInfo(First &&first, Rest &&...rest)
{
    std::cout << "[INFO] " << std::forward<First>(first) << std::endl;
    logInfo(std::forward<Rest>(rest)...);
}

template <typename First, typename... Rest>
void logWarning(First &&first, Rest &&...rest)
{
    std::cout << "[WARNING] " << std::forward<First>(first) << std::endl;
    logWarning(std::forward<Rest>(rest)...);
}

template <typename First, typename... Rest>
void logError(First &&first, Rest &&...rest)
{
    std::cout << "[ERROR] " << std::forward<First>(first) << std::endl;
    logError(std::forward<Rest>(rest)...);
}

template <typename First, typename... Rest>
void logDebug(First &&first, Rest &&...rest)
{
    std::cout << "[DEBUG] " << std::forward<First>(first) << std::endl;
    logDebug(std::forward<Rest>(rest)...);
}
#endif // CLOGGER_HPP