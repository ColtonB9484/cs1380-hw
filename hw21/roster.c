
/*
* Author: Colton Bettinson
* Assignment: HW
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "roster.h"

void print_team(const char name[]) {
	//check null
	if(name == nullptr) return;

	printf("%s\n", name);
}

int team_len(const char name[]) {
	//check null
	if(name == nullptr) return 0;

	int index = 0;
	while(name[index] != '\0') {
		
		index++;
	}

	return index;
}

void team_copy(char dest[], int dest_size, const char src[]) {

	if(dest == nullptr || dest_size <= 0) { //check null and dest_size
		return;
	} else if(src == nullptr && dest_size > 0) { //check src null
		dest[0] = '\0';
	} else {
		int index = 0;
		while(index < dest_size - 1) {
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
}

int team_same(const char a[], const char b[]) {
	//check null
	if(a == nullptr || b == nullptr) {
		return 0;
	}

	int index = 0;

	while(1) {
		if(a[index] == b[index]) {
			return 1;
		} else if(a[index] == b[index]) {
			index++;
			continue;
		} else {
			return 0;
		}
	}

	return 1;
}

void shout(char name[]) {

}

