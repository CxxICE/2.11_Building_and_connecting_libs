#pragma once

#ifdef DLLGREATER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

#include <string>

class LEAVER_API Greeter
{
public:
	static std::string greet(std::string Name);
};

