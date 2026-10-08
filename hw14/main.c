#include <stdio.h>
#include <stdlib.h>
#include "specials.h"

int main(void) {
	//sum_order test -- passed
	int prices[] = {10, 20, 30, 100};
	printf("Sum of Prices: %d\n", sum_order(prices, 4));
		
	//factorial test -- passed
	printf("\nFactorial Test:");
	printf("2!: %d\n", factorial(2));
	printf("4!: %d\n", factorial(4));
	printf("6!: %d\n", factorial(6));
	printf("10!: %d\n", factorial(10));

	//exponent test -- passed
	printf("\nExponent Test: \n");
	printf("2 squared is: %d\n", power(2, 2));
	printf("2 to the 10 is: %d\n", power(2, 10));
	printf("3 cubed is: %d\n", power(3, 3));

	//typedef and apply_op tests -- passed
	printf("\nStart of typedef and apply_op tests\n");
	//add_cents test -- passed
	printf("Add Test:\n");
	printf("4 + 5 =  %d\n", apply_op(4, 5, add_cents));
	printf("100 + 73 = %d\n", apply_op(100, 73, add_cents));

	//percent off tests -- passed
	printf("\nPercent Off Test:\n");
	printf("20%% of 100: %d\n", apply_op(100, 20, percent_off_amount));
	printf("10%% of 1050: %d\n", apply_op(1050, 10, percent_off_amount));
		

	return 0;
}
