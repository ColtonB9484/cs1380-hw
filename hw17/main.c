#include <stdio.h>
#include <stdlib.h>
#include "station.h"

int main(void) {
	//make_log test/print_log test
	int *log = make_log(5);
	log[0] = 68;
	log[1] = 71;
	log[2] = 64;
	log[3] = 72;
	log[4] = 70;
	print_log(log, 5);

	//reading_at test
	printf("Reading At 2 = %d\n", reading_at(log, 5, 2));
	printf("reading At 4 = %d\n", reading_at(log,5,4));
	
	//max test
	printf("Max = %d\n", max_reading(log, 5));

	//calloc test
	printf("Array before make_zero_log: ");
	print_log(log,5);
	log = make_zero_log(8);
	printf("calloc zeros: ");
	print_log(log, 8);
	
	//free_log test
	free_log(&log);
	printf("After free_log: ");
	if(log == NULL) {
		printf("log is NULL\n");
	} 

	//NULL tests
	printf("print_log(NULL, 5)\n");
	print_log(NULL, 5);
	printf("reading_at(NULL, 5, 0)\n");
	reading_at(NULL, 5, 0);
	printf("free_log with an already NULL pointer\n");
	free_log(&log);
	
	

	return EXIT_SUCCESS;
}
