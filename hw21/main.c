/* 
* Author: Colton Bettinson
* Assignment: HW
*
 */

#include <stdio.h>
#include <stdlib.h>
#include "roster.h"

int main(void) {
	char name[] = "Colton";
	int name_size = sizeof(name) / sizeof(name[0]);
	char name_copy[name_size];
	char long_name[] = "Bettinson";

	printf("%d\n" , name_size);	
	printf("Print 'Colton': ");
	print_team(name);

	printf("\n'Colton' char count: %d\n", team_len(name));

	printf("\nCopying 'Colton' into new string\n");
	team_copy(name_copy, name_size, name);
	print_team(name_copy);

	printf("Copying 'Bettinson' into string 'Colton' (should truncate): ");
	team_copy(name, name_size, long_name);
	print_team(name);
	
	//revert back to 'Colton' to test team_same
	team_copy(name, name_size, name_copy);
	printf("\nAre %s and %s the same: ", name, name_copy); 
	team_same(name, name_copy) == 1 ? printf("Yes\n") : printf("No\n");
	
	printf("Are %s and %s the same: ", name, long_name);
	team_same(long_name, name) == 1 ? printf("Yes\n") : printf("No\n"); 
	
	return EXIT_SUCCESS;
}
