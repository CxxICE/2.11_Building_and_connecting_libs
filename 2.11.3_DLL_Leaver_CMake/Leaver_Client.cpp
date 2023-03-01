#include <windows.h>

#include <iostream>

#include "Leaver.h"

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name;
	Leaver leaver;
    std::cout << "¬ведите им€: ";
	std::getline(std::cin, name);
	std::cout << leaver.leave(name) << std::endl;
	system("pause");
}
