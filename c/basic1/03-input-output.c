#include <stdio.h>

int main() {
	// Variables
	int number;

	printf("Please type a number: ");
	scanf("%d", &number); // & reference to store the input into this variable memory address 
	printf("You type: %d\n", number);

	return 0;
}
