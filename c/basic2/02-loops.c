#include <stdio.h>

int main() {
	// Variables
	int i;

	printf("[!] For loop\n");
	for (i = 0; i < 10; i++) {
		printf("[+] Current i value: %d\n", i);
	}

	printf("\n[!] While loop\n");
	i = 0;
	while (i < 10) {
		printf("[+] Current i value: %d\n", i);
		i++;
	}

	printf("\n[!] Do while loop\n");
	i = 0;
	do {
		printf("[+] Current i value: %d\n", i);
		i++;
	} while (i < 10);

	return 0;
}
