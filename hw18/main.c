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

	//max test
	printf("Max = %d\n", max_reading(log, 5));

	//grow_log test
	printf("Grow Log by 2, log before: ");
	print_log(log, 5);
	log = grow_log(log, 5, 7);
	printf("Log after grow_log: ");
	print_log(log, 7);
	
	//free_log test
	free_log(&log);
	printf("After free_log: ");
	if(log == NULL) {
		printf("log is NULL\n");
	} 

	//NULL tests
	printf("print_log(NULL, 5)\n");
	print_log(NULL, 5);
	printf("free_log with an already NULL pointer\n");
	free_log(&log);
	
	

	return EXIT_SUCCESS;
}
