#include <stdio.h>
#include <stdlib.h>
#include "specials.h"

int sum_order(const int prices[], int n) {
	if (n <= 0) return 0;
	/*int sum =*/return prices[0] + sum_order(prices + 1, n - 1);
	//return sum;
}

int factorial(int n) {
	if(n <= 1) return 1;
	return n * factorial(n - 1);
}

int power(int base, int exp) {
	if(exp == 0) return 1;
	return base * power(base, exp - 1);
}
