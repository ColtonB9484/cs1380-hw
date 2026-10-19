/*
* Author: Colton Bettinson
* Assignment: HW17
* Allocates memory for arrays, prints arrays, finds a value at a given index in
* an array, finds the max value in an array, frees memory allocated by malloc and
* calloc.
*/
#include <stdio.h>
#include <stdlib.h>
#include "station.h"

int *make_log(int n) {
	if(n <= 0) {
		return NULL;
	}

	int *log = malloc(n * sizeof(int));
	
	if(log == NULL) {
		return NULL;
	}

	return log;
}

int *make_zero_log(int n) {
	if(n <= 0) {
		return NULL;
	}

	int *log = calloc(n, sizeof(int));

	if(log == NULL) {
		return NULL;
	}

	return log;	
}

void print_log(const int *log, int n) {
	if(log == NULL || n <= 0) {
		
	} else {
		for(int i = 0; i < n; i++) {
			printf("%d ", log[i]);
		}
	}

	printf("\n");
}

int reading_at(const int *log, int n, int index) {
	if(log == NULL || n <= 0 || index < 0 || index >= n) {
		return 0;
	} 
	
	return log[index];
}

int max_reading(const int *log, int n) {
	if(log == NULL || n <= 0) {
		return 0;
	}

	int max = 0;

	for(int i = 0; i < n; i++) {
		if(log[i] > max) {
			max = log[i];
		}
	}
	
	return max;
}

void free_log(int **log) {
	if(log != NULL && *log != NULL) {
		free(*log);
		*log = NULL;
	}
}
