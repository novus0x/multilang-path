#include <stdio.h>

int main() {
	// Variables
	int number = 1; // Integers numbers 
	float decimal1 = 1.51; // number with 32 bits size (decimals)
	double decimal2 = 3.14; // number with 64 bits size (decimals)
	char letter = 'a'; // Single letter

	printf("Type int: %d\n", number);
	printf("Type float: %f\n", decimal1);
	printf("Type double: %lf\n", decimal2);
	printf("Type char: %c\n", letter);

	return 0;
}
