#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// Variables
	int num, gen;

	srand(time(NULL)); // Seed using time
	gen = rand() % 20 + 1; // Generate between 1 - 20
 
	printf("[!] Project 03 - Guessing number\n");

	printf("[?] Guess a number from 1 to 20: ");
	scanf("%d", &num);
	printf("[+] Generate number: %d\n", gen);
	printf("[+] Your guess: %d\n", num);

	return 0;

}
