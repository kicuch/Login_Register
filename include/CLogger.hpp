#include <iostream>

void logInfo(){}
void logWarning(){}
void logError(){}
void logDebug(){}

template<typename First, typename ...Rest>
void logInfo(First && first, Rest && ...rest)
{
	std::cout << "[INFO] " << std::forward<First>(first) << "\n";
	logInfo(std::forward<Rest>(rest)...);
}

template<typename First, typename ...Rest>
void logWarning(First && first, Rest && ...rest)
{
	std::cout << "[WARNING] " << std::forward<First>(first) << "\n";
	logWarning(std::forward<Rest>(rest)...);
}

template<typename First, typename ...Rest>
void logError(First && first, Rest && ...rest)
{
	std::cout << "[ERROR] " << std::forward<First>(first) << "\n";
	logError(std::forward<Rest>(rest)...);
}

template<typename First, typename ...Rest>
void logDebug(First && first, Rest && ...rest)
{
	std::cout << "[DEBUG] " << std::forward<First>(first) << "\n";
	logDebug(std::forward<Rest>(rest)...);
}