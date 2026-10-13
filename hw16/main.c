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
	

	return EXIT_SUCCESS;
}
