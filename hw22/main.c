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
	printf("\n");

	//labels_match test
	safe_copy(team_copy, copy_size, team_b);
	printf("%s matches %s? -> %d\n", team_copy, team_b, labels_match(team_copy, team_b));
	printf("%s mathces %s? -> %d\n", team_a, team_b, labels_match(team_a, team_b));
	//labels_match null tets
	printf("labels_match(NULL, team_b) = %d\n", labels_match(NULL, team_b));
	printf("labels_match(team_a, NULL) = %d\n\n", labels_match(team_a, NULL));
	
	//find_text tests
	char needle[20] = "na";
	int found_position = find_text(team_a, needle);
	
	if(found_position < 0) {
		printf("'%s' could not be found in '%s'\n", needle, team_a);
	} else {

		printf("Found '%s' in '%s' at position %d\n", needle, team_a, found_position);
	}

	found_position = find_text(team_b, needle);
	
	if(found_position < 0) {
		printf("'%s' could not be found in '%s'\n", needle, team_b);
	} else {
		printf("Found '%s' in '%s' at position %d\n", needle, team_b, found_position);
	}
	//null tests
	found_position = find_text(NULL, needle);
	if(found_position < 0) {
		printf("NULL pointer\n");
	} else {
		printf("How'd this happen?\n");
	}

		
	found_position = find_text(team_a, NULL);
	if(found_position < 0) {
		printf("NULL pointer\n");
	} else {
		printf("How'd this happen?\n");
	}

	return EXIT_SUCCESS;
}
