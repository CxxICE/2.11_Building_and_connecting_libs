#pragma once

#include <string>

#include "DLL.h"

class CL_DLL_API Figure
{
public:
	Figure();
	virtual void printParam();
protected:
	int quantSides;
	std::string name;
};

