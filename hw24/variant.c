
/*
* Author: Colton Bettinson
* Assignment: HW
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "variant.h"

void print_stat(const struct Stat *s) {
	//NULL check
	if(s == nullptr) return;

	if(s->kind == STAT_SCORE) {
		printf("Score: %d\n", s->value.score);
	} else if(s->kind == STAT_AVERAGE) {
		printf("Average: %.2f\n", s->value.average);
	} else {
		printf("Unkown Kind\n");
	}
}
/*
void set_score(struct Stat *s, int score) {

}

void set_average(struct Stat *s, float average) {

}

int get_score(const struct Stat *s) {

}

float get_average(const struct Stat *s) {

}

void print_sizes(void) {

}
*/
