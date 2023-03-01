#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include "Figure.h"
#include "Quadrilateral.h"

class CL_DLL_API Square : public Quadrilateral
{
public:
	Square(int a);
};
