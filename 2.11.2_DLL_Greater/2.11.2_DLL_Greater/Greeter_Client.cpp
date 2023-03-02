#include <windows.h>

#include <iostream>

#include "Greeter.h"

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name;
    std::cout << "Введите имя: ";
	std::getline(std::cin, name);
	std::cout << Greeter::greet(name) << std::endl;
	system("pause");
}
