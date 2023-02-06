#include "task3.h"
int main() {
	//user input
	int n;
	std::cout << "Enter a number of rows and colomns: " << std::endl;
	std::cin >> n;

	//creating matrix with pointers
	//dynamic memory
	int** matr = new int* [n];

	for (int i = 0; i < n; ++i)
		matr[i] = new int[n];

	fill(n, n, matr);
	print(n, n, matr);

	summ(n, n, matr);
	
	//free dynamic memory
	for(int i = 0; i < n; i++)
		delete[] matr[i];
	delete matr;
}