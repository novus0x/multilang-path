#include <stdio.h>

int main() {
	// Variables
	double m, km;
	
	printf("[!] Project 02 - Unit Converter\n");
	printf("[!] Meters to kilometers\n");
	printf("[?] Meters: ");
	scanf("%lf", &m);
	km = m / 1000;
	printf("[+] Kilometers: %.4lf km\n", km);


	return 0;
}
