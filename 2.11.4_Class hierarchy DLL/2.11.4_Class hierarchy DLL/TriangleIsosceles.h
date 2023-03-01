#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include "Figure.h"
#include "Triangle.h"

class CL_DLL_API TriangleIsosceles : public Triangle
{
public:
	TriangleIsosceles(int a, int b, int A, int B);
};