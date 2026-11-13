
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

void set_score(struct Stat *s, int score) {
	//null check
	if(s == nullptr) return;

	//change kind and set score
	s->kind = STAT_SCORE;
	s->value.score = score;

}

void set_average(struct Stat *s, float average) {
	//null check
	if(s == nullptr) return;

	//chang kind and set average
	s->kind = STAT_AVERAGE;
	s->value.average = average;

}

int get_score(const struct Stat *s) {
	if(s == nullptr || s->kind != STAT_SCORE) return 0;
	
	return s->value.score; 
}

float get_average(const struct Stat *s) {
	if(s == nullptr || s->kind != STAT_AVERAGE) return 0.0f;
	
	return s->value.average;
}

//For print_sizes only, shows difference in size of unions and structs
struct test_size {
	int score;
	float average;
};

void print_sizes(void) {
	size_t size = sizeof(union StatValue);
	printf("Size of union: %zu\n", size);

	size = sizeof(struct test_size);
	printf("Size of struct { int score; float average; } : %zu\n", size);
}

