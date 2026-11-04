
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
	if(dest == nullptr || dest_size <= 0) {
		
	} else if (src == nullptr && dest_size > 0) {
		dest[0] == '\0';
	} else {
		strncpy(dest, src, dest_size - 1);
		dest[dest_size - 1] == '\0';
	}
}

void safe_join(char dest[], int dest_size, const char extra[]) {
	if(dest == nullptr || dest_size <= 0 || extra == nullptr) return;

	int size_left = dest_size - strlen(dest);
	strncat(dest, extra, size_left);
}

int labels_match(const char a[], const char b[]) {

}

int find_text(const char label[], const char needle[]) {

}

