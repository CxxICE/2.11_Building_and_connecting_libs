#pragma once

#include "DLL.h"
#include "Figure.h"

class CL_DLL_API Quadrilateral : public Figure
{
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void printParam() override;
protected:
	int a, b, c, d, A, B, C, D;
};

