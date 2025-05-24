#include <stdio.h>

int main() {
	// Variables
	int num1, num2, opt;

	printf("[!] Conditionals\n");
	printf("[?] Please write number 1 and 2: ");
	scanf("%d %d", &num1, &num2);

	// Using (if/else)
	if (num1 > num2) {
		opt = 1;
		printf("[+] The first number is higher than number 2\n");
	} else if (num1 < num2)	{
		opt = 2;
		printf("[+] The second number is higher than number 1\n");
	} else {
		opt = 3;
		printf("[+] Number 1 is equal than number 2\n");
	}

	// Using switch
	switch (opt) {
		case 1:
			printf("[+] The first number is higher than number 2\n");
			break;
		case 2:
			printf("[+] The second number is higher than number 1\n");
			break;
		case 3:
			printf("[+] Number 1 is equal than number 2\n");
			break;
	}

	return 0;
}
