#include <stdio.h>
#include <stdlib.h>

int main() {
	// Variables
	int gen, salt;

	printf("Type a number (this is gonna be the seed): ");
	scanf("%d", &salt);

	srand(salt); // Seed
	gen = rand() % 100 + 1; // Generate between 1 - 100
	printf("Generate number: %d\n", gen);

	return 0;
}
