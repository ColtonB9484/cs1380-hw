/* 
* Author: Colton Bettinson
* Assignment: HW
*
 */

#include <stdio.h>
#include <stdlib.h>
#include "roster.h"

int main(void) {
	char name[] = "Arsenal";

	char name_copy[20];
	int copy_size = sizeof(name_copy) / sizeof(name_copy[0]);

	char name_tiny[4];
	int tiny_size = sizeof(name_tiny) / sizeof(name_tiny[0]);

	char long_name[] = "Tottenham";

	//test print_team and team_len
	print_team(name);
	printf("len=%d first='%c'\n", team_len(name), name[0]);
	print_team(long_name);
	printf("len=%d first='%c'\n", team_len(long_name), long_name[0]);

	//test team_copy into blank
	printf("\nCopy: ");
	team_copy(name_copy, copy_size, name);
	print_team(name_copy);
	
	//test team_copy truncation
	printf("tiny: ");
	team_copy(name_tiny, tiny_size, long_name);
	print_team(name_tiny);
	
	//test team_same
	printf("\nAre %s and %s the same: ", name, name_copy); 
	team_same(name, name_copy) == 1 ? printf("Yes\n") : printf("No\n");
	
	printf("Are %s and %s the same: ", name, long_name);
	team_same(long_name, name) == 1 ? printf("Yes\n") : printf("No\n"); 
	
	//test long_name
	printf("SHOUT: ");
	shout(name_copy);

	//test ALL NULL
	printf("\nTest print_team(NULL): ");
	print_team(NULL);
	printf("\nTest team_len(NULL): %d\n", team_len(NULL));
	printf("Test team_copy(NULL, 1, name): \n");
	team_copy(NULL, 1, name);
	printf("Test team_copy(name_copy, 0, name):\n");
	team_copy(name_copy, 0, name);
	printf("Test team_same(NULL, name) and team_same(name, NULL): %d, %d\n", team_same(NULL, name), team_same(name, NULL));
	printf("Test shout(NULL):\n");
	shout(NULL);
	
	
	return EXIT_SUCCESS;
}
