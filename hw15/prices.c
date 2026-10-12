/*
* Author: Colton Bettinson
* Assignment: HW15
* Functionality for prices util. Swaps two integar values, sets integar value to a given value, prints name and price of an item, retargets pointer of one value to another
*/
#include <stdio.h>
#include <stdlib.h>
#include "prices.h"

void swap_cents(int *a, int *b) {
	if(a == NULL || b == NULL) {
		printf("Error: NULL Pointer\n");
	} else {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

void set_price(int *price_cents, int new_cents) {
	if(price_cents == NULL) {
		printf("Error: NULL Pointer\n");
	} else {
		*price_cents = new_cents;
	}
}

void print_price(const char *name, const int *price_cents) {
	if(price_cents == NULL) {
		printf("Error: price_cents is NULL\n");
	} else {
		printf("%s: %d cents\n", name, *price_cents);
	}
}

void retarget(int **current, int *other) {
	if(*current == NULL || other == NULL) {
		printf("Error: NULL pointer\n");
	} else {
		*current = other;
	}
}
