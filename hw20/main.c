#include <stdio.h>
#include <stdlib.h>
#include "picture.h"

int main(void) {
	int pic[][COLS] = {
		{0, 0, 0, 0, 0},
		{0, 1, 1, 1, 0},
		{0, 1, 0, 1, 0},
		{0, 0, 0, 0, 0}
	};
	int nrows = sizeof(pic) / sizeof(pic[0]);
	
	//print_picture test
	print_picture(pic, nrows);
	
	//find_code test
	printf("find 1 -> %d\n", find_code(pic, nrows, 1));
	printf("find 0 -> %d\n", find_code(pic, nrows, 9));

	//set_cell test
	set_cell(pic, nrows, 2, 2, 1);
	printf("After set_cell(2, 2, 1):\n");
	print_picture(pic, nrows);
	return EXIT_SUCCESS;
}
