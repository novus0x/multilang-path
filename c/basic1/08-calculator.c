#include <stdio.h>
#include <math.h>

int main() {
	// Variables
	double num1, num2, result;
	char opt;

	printf("[!] Project 01 - Basic Calculator (using conditionals) (+ | - | * | / | ^)\n");
	printf("[?] Expresion (num1 op num2): ");
	scanf("%lf %c %lf", &num1, &opt, &num2);

	// Using conditionals
	if (opt == '+') result = num1 + num2;
	else if (opt == '-') result = num1 - num2;
	else if (opt == '*') result = num1 * num2;
	else if (opt == '/') result = num1 / num2;
	else if (opt == '^') result = pow(num1, num2);

	printf("[+] The result of %.2lf %c %.2lf is: %.4lf\n", num1, opt, num2, result);

	return 0;
}
