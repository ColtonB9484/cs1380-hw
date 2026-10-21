#include <stdio.h>
#include <stdlib.h>
#include "station.h"

int main(void) {
	//make_log test/print_log test
	int log_size = 5;
	int *log = make_log(log_size);
	log[0] = 68;
	log[1] = 71;
	log[2] = 64;
	log[3] = 72;
	log[4] = 70;
	print_log(log, log_size);

	//max test
	printf("Max = %d\n", max_reading(log, log_size));

	//grow_log test
	printf("Grow Log by 2, log before: ");
	print_log(log, log_size);
	log = grow_log(log, log_size, 7);
	log_size = log_size + 2;
	printf("Log after grow_log: ");
	print_log(log, log_size); 

	//append_reading test
	printf("Appending Reading 84 to log: ");
	log = append_reading(log, &log_size, 84);
	print_log(log, log_size);
	
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
