/*
* Author: Colton Bettinson
* Assignment: HW15
* Test environment for the prices util"
*/
#include <stdio.h>
#include <stdlib.h>
#include "prices.h"


int main(void) {
	int price[] = {350, 450, 250};
	char *name[] = {"Latte", "Mocha", "Juice"};
	
	//Set Price Test
	printf("Price Before set_price: %s=%d addr=%p tag=%p *tag=%d\n", name[0], price[0], (void *) & price[0], (void *) &price[0], price[0]);
	set_price(&price[0], 350);
	printf("Price After set_price: %s=%d\n", name[0], price[0]);

	//Swap Test
	printf("\nSwap %s=%d with %s=%d -> ", name[0], price[0], name[1], price[1]);
	swap_cents(&price[0], &price[1]);
	printf("%s=%d, %s=%d\n", name[0], price[0], name[1], price[1]);

	//Print Price Test
	printf("\nTest print_price:\n");
	for(int i = 0; i < 3; i++) {
		print_price(name[i], &price[i]);
	}

	//Missing Tag Tests
	printf("\nTest NULL pointers\n");
	int *null_test = NULL;
	set_price(null_test, 200);
	swap_cents(null_test, &price[2]);
	retarget(&null_test, &price[3]);

	//Retarget Test
	int *special = &price[1];
	printf("\nSpecial was %s %d;", name[1], *special);
	retarget(&special, &price[2]);
	printf("After retarget special is %s %d\n", name[2], *special);	

	//Array Demo
	printf("\nBoard: %d %d %d\n", *(price + 0), *(price + 1), *(price + 2));
	

	return 0;
}
