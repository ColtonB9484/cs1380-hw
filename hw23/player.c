
/*
* Author: Colton Bettinson
* Assignment: HW23
* Handler for player struct. Prints player info, initializes player, returns points
* for given player, adds points to a given player, and compares jersey numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include "player.h"


void print_player(const struct Player *p) {
	//null check -- return nothing if null
	if(p == nullptr) return;

	printf("Name: %s Jersey: %d Points: %d\n", p.name, p.jersey, p.points); 
}

void init_player(struct Player *p, const char name[], int jersey, int points) {
	//return nothing if p is null
	if(p == nullptr) return;
	//if name is null, first index to escape else set to given argument
	if(name == nullptr) {
		 p->name[0] = '\0';
	}
	else {
		p->name = name;
	}
	
	p->jersey = jersey;
	p->points = points;
}

int get_points(const struct Player *p) {
	//return 0 if p is null
	if(p == nullptr) {
		return 0;
	}

	return p.points;
}

void add_points(struct Player *p, int more) {
	//do nothing if p is null
	if(p == nullptr) {
		return;
	}

	p->points = p.points + more;
}

int same_jersey(const struct Player *a, const struct Player *b) {
	//if both non-null & jerseys match, return 1
	if((a != nullptr || b != nullptr) && a->jersey == b->jersey) {
		return 1;
	}

	return 0;
}


