
/*
* Author: Colton Bettinson
* Assignment: HW
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lineup.h"

void print_label(const char label[]) {
	if (label == nullptr) return;

	printf("%s\n", label);
}

int label_len(const char label[]) {
	if(label == nullptr) return 0;

	return (int)strlen(label);
}

void safe_copy(char dest[], int dest_size, const char src[]) {

}

void safe_join(char dest[], int dest_size, const char extra[]) {

}

int labels_match(const char a[], const char b[]) {

}

int find_text(const char label[], const char needle[]) {

}

