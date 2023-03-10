#pragma once

#include "DLL.h"
#include "Figure.h"

class CL_DLL_API Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	void printParam() override;
protected:
	int a, b, c, A, B, C;
};

