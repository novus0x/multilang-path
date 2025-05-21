#include <stdio.h>

int main() {
	// Variables
	int num1, num2, operation;

	printf("Please type number 1 and 2: ");
	scanf("%d %d", &num1, &num2);

	// Operations
	operation = num1 + num2;
	printf("Addition: %d\n", operation);
	operation = num1 - num2;
	printf("Subtraction: %d\n", operation);
	operation = num1 * num2;
	printf("Multiplication: %d\n", operation);
	operation = num1 / num2; // Return int value no decimals
	printf("Division: %d\n", operation);
	operation = num1 % num2;
	printf("Return the remainder of a division: %d\n", operation);

	return 0;
}
