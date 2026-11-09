/* 
* Author: Colton Bettinson
* Assignment: HW
* Demo client for player.h
 */

#include <stdio.h>
#include <stdlib.h>
#include "player.h"

int main(void) {
	struct Player player1;
	struct Player player2;
	struct Player player3;
	struct Player player4;
	struct Player player5;
	struct Player *roster[5] = {
		&player1,
		&player2,
		&player3,
		&player4,
		&player5
	};

	//init player test
	init_player(&player1, "Jordan Love", 10, 20);
	init_player(&player2, "Mathew Golden", 0, 12);
	init_player(&player3, "Bo Nix", 10, 6);
	init_player(&player4, "Tucker Kraft", 85, 0);
	init_player(&player5, "Trey Smack", 28, 12);
	init_player(nullptr, "Christian Watson", 9, 7);

	//print player test
	for(int i = 0; i < 5; i++) {
		print_player(roster[i]);
	}
	print_player(nullptr);

	//get_points test & add_points tests
	printf("\nPoints for player1 before: %d\n", get_points(&player1));
	add_points(&player1, 6);
	printf("Points for player1 after: %d\n", get_points(&player1));
	printf("Points for null player: %d\n", get_points(nullptr));

	//Same_jersey tests
	printf("\nSame Jersey -> %d\n", same_jersey(&player1, &player3));
	printf("Same Jersey -> %d\n", same_jersey(&player1, &player2));
	printf("Same Jersey nullprt -> %d\n", same_jersey(nullptr, &player3));

	
	

	return EXIT_SUCCESS;
}
