#include <stdio.h>
#include <math.h>

// Main function
int main() {
	int opt;
	double num1, num2, result;
 
	printf("[!] Project 04 - Simple calculator\n");
	printf("[!] Menu\n");
	printf("    0. Exit\n");
	printf("    1. Addition\n");
	printf("    2. Subtraction\n");
	printf("    3. Multiplication\n");
	printf("    4. Division\n");
	printf("    5. Power\n");
	printf("    6. Square root\n");

	while (1) {
		printf("[?] Option: ");
		if (scanf("%d", &opt) != 1) break;
		else if (opt <= 0 || opt > 6) break;
		

		printf("[?] Write the first number: ");
		scanf("%lf", &num1);
		if (opt != 6) {
			printf("[?] Write the second number: ");
			scanf("%lf", &num2);
		}

		if (opt == 1) result = num1 + num2;
		else if (opt == 2) result = num1 - num2;
		else if (opt == 3) result = num1 * num2;
		else if (opt == 4) result = num1 / num2;
		else if (opt == 5) result = pow(num1, num2);
		else if (opt == 6) result = sqrt(num1);
		printf("[+] The result is: %.4lf\n", result);
	}


	return 0;
}

