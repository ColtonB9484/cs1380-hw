/*
* Author: Colton Bettinson
* Assignment: HW15
* Test environment for the prices util"
*/
#include <stdio.h>
#include <stdlib.h>
#include "prices.h"


int main(void) {
	int price_cents = 250;
	int cost1 = 500;
	int cost2 = 300;
	char name[] = "Latte";

	//Swap Test
	printf("Before swap_cents: a = %d, b = %d\n", cost1, cost2);
	swap_cents(&cost1, &cost2);
	printf("After swap_cents: a = %d, b = %d\n", cost1, cost2);

	//Set Price Test
	printf("\nPrice Before set_price: price = %d\n", price_cents);
	set_price(&price_cents, 350);
	printf("Price After set_price: price = %d\n", price_cents);

	//Print Price Test
	printf("\nTest print_price:\n");
	print_price(name, &price_cents);

	//Retarget Test
	int *ptr = &cost1;
	printf("\nBefore retarget: *ptr = %d\n", *ptr);
	retarget(&ptr, &cost2);
	printf("After retarget: *ptr = %d\n", *ptr);	
	

	return 0;
}
