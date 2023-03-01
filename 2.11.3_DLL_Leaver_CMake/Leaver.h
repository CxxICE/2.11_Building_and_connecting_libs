#pragma once

#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

#include <string>
 
class LEAVER_API Leaver
{
public:
	std::string leave(std::string Name);
};

