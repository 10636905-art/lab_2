#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void task18(double x, double y);
void task25(double x, double y);
void task44(double x, double y);
void task21(double x);
void task22(double x, double y);

double z;

int main() {
	int K = 16, N, equation_1, equation_2, equation_3, equation_4, equation_5;
	
	N = 1;
	equation_1 = ((N * N * N + K * K) % 60) + 1;

	N = 2;
	equation_2 = ((N * N * N + K * K) % 60) + 1;

	N = 3;
	equation_3 = ((N * N * N + K * K) % 60) + 1;

	N = 4;
	equation_4 = ((N * N * N + K * K) % 60) + 1;

	N = 5;
	equation_5 = ((N * N * N + K * K) % 60) + 1;

	printf("My equations are %d, %d, %d, %d and %d\n", equation_1, equation_2, equation_3, equation_4, equation_5);

	double x, y;
	printf("Input X: ");

	scanf_s("%lf", &x);

	printf("input Y: ");
	scanf_s("%lf", &y);


	//task 18 25 44 21 22
	task18(x, y);
	task25(x, y);
	task44(x, y);
	task21(x);
	task22(x, y);

	return 0;
}

void task18(double x, double y) {
	printf("\nTask: 18\n");
	printf("Equation 18 is: e^x - (y^2 + 12 * x * y - 3 * x^2) / (18 * y - 1)\n");
	
	if (18 * y == 1 || exp(x) <= 0 || (y * y) < 0 || (x * x) < 0) {
		printf("No solutions at X = %.2f\n, Y = %.2f\n", x, y);
	}
	else {
		z = exp(x) - (y * y + 12.0 * x * y - 3.0 * x * x) / (18.0 * y - 1.0);
		printf("Answer: %.2f\n", z);
	}
}

void task25(double x, double y) {
	printf("\nTask: 25\n");
	printf("Equation 25 is: ((1 + sin^2(x + y)) / (2 + |(x - 2x) / (1 + x^2 * y^2)|) + x\n");

	if ((x * x * y * y) == -1 || pow(sin(x + y), 2) < 0 || pow(sin(x + y), 2) > 1) {
		printf("No solutions at X = %.2f, Y = %.2f\n", x, y);
	}
	else {
		z = ((1.0 + pow(sin(x + y), 2)) / (2.0 + fabs(x - (2.0 * x) / (1.0 + x * x * y * y))) + x);
		printf("Answer: %.2f\n", z);
	}
}

void task44(double x, double y) {
	printf("\nTask: 44\n");
	printf("Equation 44 is: |3 - x / (5 - 7y)|\n");

	if (5.0 - 7.0 * y == 0) {
		printf(" No solutions at Y = %.2f\n", y);
	}
	else {
		z = fabs(3.0 - (x / (5.0 - 7.0 * y)));
		printf("Answer: %.2f\n", z);
	}
}

void task21(double x) {
	printf("\nTask:21\n");
	printf("Equation 21 is: e^x - x - 2 + (1 + x)^x\n");

	if (exp(x) <= 0 || 1.0 + x <= 0) {
		printf("No solutions at X = %.2f\n", x);
	}
	else {
		z = exp(x) - x - 2.0 + pow(1.0 + x, x);
		printf("Answer: %.2f\n", z);
	}
}

void task22(double x, double y) {
	printf("\nTask:22\n");
	printf("Equation 22 is : xlnx + y / (cosx - (x / 3))\n");

	if (x <= 0 || cos(x) == x / 3.0) {
		printf("No solutions at X = %.2f\n", x);
	}
	else {
		z = x * log(x) + y / (cos(x) - x / 3.0);
		printf("Answer: %.2f\n", z);
	}
}
