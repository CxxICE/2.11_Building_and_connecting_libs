#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include <string>

class CL_DLL_API Figure
{
public:
	Figure();
	virtual void printParam();
protected:
	int quantSides;
	std::string name;
};

