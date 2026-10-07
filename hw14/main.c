#include <stdio.h>
#include <stdlib.h>
#include "specials.h"

int main(void) {
	//sum_order test -- passed
	int prices[] = {10, 20, 30, 100};
	printf("Sum of Prices: %d\n", sum_order(prices, 4));
		
	//factorial test
	printf("Factorial Test:");
	printf("2!: %d\n", factorial(2));
	printf("4!: %d\n", factorial(4));
	printf("6!: %d\n", factorial(6));
	printf("10!: %d\n", factorial(10));

	//exponent test
	printf("Exponent Test: \n");
	printf("2 squared is: %d\n", power(2, 2));
	printf("2 to the 10 is: %d\n", power(2, 10));
	printf("3 cubed is: %d\n", power(3, 3));	
		

	return 0;
}
