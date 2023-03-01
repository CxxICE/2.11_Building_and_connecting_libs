#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include "Figure.h"

class CL_DLL_API Quadrilateral : public Figure
{
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void printParam() override;
protected:
	int a, b, c, d, A, B, C, D;
};

