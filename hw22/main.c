/* 
* Author: Colton Bettinson
* Assignment: HW
*
 */

#include <stdio.h>
#include <stdlib.h>
#include "lineup.h"

int main(void) {
	char team_a[20] = "Arsenal";
	char team_b[20] = "Tottenham";
	char team_copy[20];
	char tiny_team[4];
	int copy_size = sizeof(team_copy) / sizeof(team_copy[0]);
	int tiny_size = sizeof(tiny_team) / sizeof(tiny_team[0]);

	//print_label test and label_len test
	print_label(team_a);
	printf("Label length = %d\n", label_len(team_a));
	print_label(team_b);
	printf("Label length = %d\n", label_len(team_b));
	//print_label and label_len NULL tests
	print_label(NULL);
	printf("Label length = %d\n\n", label_len(NULL));
	
	//safe_copy test
	safe_copy(team_copy, copy_size, team_a);
	print_label(team_copy);
	safe_copy(tiny_team, tiny_size, team_b);
	print_label(tiny_team);
	//safe_copy NULL tests
	safe_copy(NULL, tiny_size, team_a);
	safe_copy(tiny_team, 0, team_a);
	print_label(tiny_team);
	safe_copy(tiny_team, tiny_size, NULL);
	print_label(tiny_team);
	printf("\n");
	//safe_join test
	safe_join(team_copy, copy_size, team_b);
	print_label(team_copy);
	safe_join(team_copy, copy_size, team_b); //join until truncation
	print_label(team_copy);
	//null tests
	safe_join(NULL, copy_size, team_b);
	safe_join(team_a, 0, team_b);
	print_label(team_a);
	safe_join(team_a, copy_size, NULL);
	print_label(team_a);

	return EXIT_SUCCESS;
}
