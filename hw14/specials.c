#include <stdio.h>
#include <stdlib.h>
#include "specials.h"

int sum_order(const int prices[], int n) {
	if (n <= 0) return 0;
	int sum = prices[0] + sum_order(prices + 1, n - 1);
	return sum;
}
