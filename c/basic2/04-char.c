#include <stdio.h>
#include <ctype.h>

int main() {
	// Variables
	char a = 'a', A = 'A', space = ' ', num = '8';
	
	// Only printfs if is true
	if (islower(a)) printf("[+] islower(): %c\n", a);
	if (isupper(A)) printf("[+] isupper(): %c\n", A);
	if (isspace(space)) printf("[+] isspace(): %c\n", space);
	if (isblank(space)) printf("[+] isblank(): %c\n", space);
	if (isdigit(num)) printf("[+] isdigit(): %c\n", num);

	return 0;
}
