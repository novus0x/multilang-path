#include <stdio.h>

// Function prototype
void func1();
int func2();
char func3();
int func4(int, int);
void func5(int *);

// Main function
int main() {
	func1();
	func2();
	func3();

	int val = func4(10, 5);
	printf("[+] Current value before func5: %d\n", val);
	func5(&val);
	printf("[+] Current value after func5: %d\n", val);

	return 0;
}

// Function definition
void func1() {
	printf("[+] A function that doesn't explicitly return a value after it executes\n");
}

int func2() {
	printf("[+] An int function will return an integer\n");
	return 0;
}

char func3() {
	printf("[+] Returns a one-character alphanumeric value\n");
	return 'c';
}

int func4(int a, int b) {
	return a + b;
}

void func5(int *a) {
	printf("[+] Current value in func 5: %d\n", *a);
	printf("[!] Changing value from %d to 5\n", *a);
	*a = 5;
};
