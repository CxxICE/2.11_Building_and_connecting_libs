#pragma once

#ifdef MY2114CLASSHIERARCHYDLL_EXPORTS
#define CL_DLL_API __declspec(dllexport)
#else
#define CL_DLL_API __declspec(dllimport)
#endif

#include "Figure.h"

class CL_DLL_API Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	void printParam() override;
protected:
	int a, b, c, A, B, C;
};

