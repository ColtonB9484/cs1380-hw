
/*
* Author: Colton Bettinson
* Assignment: HW
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "roster.h"

void print_team(const char name[]) {
	if(name == nullptr) return;

	printf("%s\n", name);
}

int team_len(const char name[]) {
	int index = 0;
	while(1) {
		if(name[index] == '\0') break;
		
		index++;
	}

	return index;
}

void team_copy(char dest[], int dest_size, const char src[]) {

}

int team_same(const char a[], const char b[]) {

	return 0;
}

void shout(char name[]) {

}

