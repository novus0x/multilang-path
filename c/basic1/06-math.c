#include <stdio.h>
#include <math.h> // Header library for math

int main() {
	// Variables
	double num1, num2, op;
	
	printf("Type number 1 and 2: ");
	scanf("%lf %lf", &num1, &num2);

	// Basics operations using math.h
	op = pow(num1, num2);
	printf("The result of number1 ^ number2: %.2lf\n", op);

	op = sqrt(num1);
	printf("The result of square root(number 1): %.2lf\n", op);

	// There are more functions in math.h

	return 0;
}
