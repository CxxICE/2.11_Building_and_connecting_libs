#include "Triangle.h"

#include <iostream>
#include <format>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{	
	quantSides = 3;
	name = "�����������";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::printParam()
{
	std::cout	<< name << ": \n"
				<< std::format("�������: a={}, b={}, c={}\n",a,b,c)		//c++20
				<< std::format("����:\t A={}, B={}, C={}\n\n",A,B,C);	//c++20
}