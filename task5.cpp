#include "task5.h"
int add(int x, int y)
{
	return x + y;
}
int subtract(int x, int y)
{
	return x - y;
}
int multiplication(int x, int y)
{
	return x * y;
}
int division(int x, int y)
{
	return x / y;
}
int operation(int(*oper)(int, int), int x, int y)
{
	return oper(x, y);
}

void itog (char znak, int x, int y) {
	if (znak == '+') { 
		std::cout << operation(add, x, y);
		return;
	}
	else if (znak == '-') { 
		std::cout << operation(subtract, x, y);
		return;
	}
	else if (znak == '*') { 
		std::cout << operation(multiplication, x, y);
		return;
	}
	else if (znak == '/') { 
		std::cout << operation(division, x, y);
		return;
	}
	else { 
		std::cout << "error value";
	}
	
}