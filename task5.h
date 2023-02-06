#pragma once
#include <iostream>
int add(int x, int y);
int subtract(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int operation(int(*oper)(int, int), int x, int y);

void itog(char znak, int x, int y);