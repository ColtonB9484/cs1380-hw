#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main(void) {
	int menu_prices[] = {250, 350, 450, 199, 500};
	int menu_length = sizeof(menu_prices) / sizeof(menu_prices[0]);	
	
	//Print Menu Test
	printf("Menu: ");
	print_menu(menu_prices, menu_length);

	//Price At Test
	printf("price_at 2 = %d\n", price_at(menu_prices, menu_length, 2));

	//Max Price Test
	printf("Max: %d\n", max_price(menu_prices, menu_length));

	//Reverse Menu Test
	printf("\nMemory Addresses before reverse_menu:\n");
	for(int i = 0; i < menu_length; i++) {
		printf("addr=%p ", (void *) &menu_prices[i]);
	}
	printf("\n");
	reverse_menu(menu_prices, menu_length);
	printf("Memory Addresses After reverse_menu:\n");
	for(int i = 0; i < menu_length; i++) {
		printf("addr=%p ", (void *) &menu_prices[i]);
	}
	printf("\n");
	printf("Reversed Menu: ");
	print_menu(menu_prices, menu_length);
	
	//Items Between Test
	printf("\nItems between 0 and 4 = %d\n", items_between(&menu_prices[0], &menu_prices[4]));
	
	//Drink Length Test
	printf("drink_length(\"Latte\") = %d\n", drink_length("Latte"));
	

	return EXIT_SUCCESS;
}
