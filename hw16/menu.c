#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void print_menu(const int *prices, int n) {
	
	if(prices == NULL || n <= 0) {
		printf("\n");
		return;
	}

	for(const int *p = prices; p < prices + n; p++) {
		printf("%d ", *p);
	}
	printf("\n");
}


int price_at(const int *prices, int n, int index) {
	if(prices == NULL || n <= 0 || index > n || index < 0) {
		printf("\n");
		return -1;
	}
	
	return *(prices + index);
}

int max_price(const int *prices, int n) {
	int max = 0;
	if(prices == NULL || n <= 0) return -1;

	for(const int *p = prices; p < prices + n; p++) {
		if(max < *p) {
			max = *p;
		}
	}
	return max;
}
/*
void reverse_menu(int *prices, int n) {

}

int items_between(const int *start, const int *end) {

}

int drink_length(const char *name) {

}
*/
