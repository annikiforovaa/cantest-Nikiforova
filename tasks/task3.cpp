#include "task3.h"
void fill(int n, int m, int** matr) { //function of filling matrix with random numbers
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matr[i][j] = 1 + rand() % 70;
		}
	}
}

void print(int n, int m, int** matr) { //function of printing matrix
	for (int i = 0; i < n; i++) {
		std::cout << std::endl;
		for (int j = 0; j < n; j++) {
			std::cout << matr[i][j] << " ";
		}
	}
}

void summ(int n, int m, int** matr) { //function of sum pobochnaya diagonal'
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1)
				sum += matr[i][j];
		}
	}
	std::cout << std::endl;
	std::cout << "Sum of pobochnaya diagonal' = " << sum << std::endl;
}