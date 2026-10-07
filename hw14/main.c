#include <stdio.h>
#include <stdlib.h>
#include "specials.h"

int main(void) {
	int prices[] = {10, 20, 30, 100};
	printf("Sum of Prices: %d\n", sum_order(prices, 4));	
		

	return 0;
}
