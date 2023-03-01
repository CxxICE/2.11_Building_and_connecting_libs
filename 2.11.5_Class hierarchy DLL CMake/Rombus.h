#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include "Figure.h"
#include "Quadrilateral.h"

class CL_DLL_API Rombus : public Quadrilateral
{
public:
	Rombus(int a, int A, int B);
};