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
	int name_size = sizeof(name) / sizeof(name[0]);
	char name_copy[name_size];
	char long_name[] = "Tottenham";

	printf("%d\n" , name_size);	
	printf("Print '%s': ", name);
	print_team(name);

	//test char count
	printf("\n'%s' char count: %d\n", name, team_len(name));
	printf("'%s' char count: %d\n", long_name, team_len(long_name));
	//test team_copy into blank
	printf("\nCopying '%s' into new string\n", name);
	team_copy(name_copy, name_size, name);
	print_team(name_copy);
	
	//rest team_copy truncation
	printf("Copying '%s' into string '%s' (should truncate): ", long_name, name);
	team_copy(name, name_size, long_name);
	print_team(name);
	
	//revert back to 'Colton' to test team_same
	team_copy(name, name_size, name_copy);

	printf("\nAre %s and %s the same: ", name, name_copy); 
	team_same(name, name_copy) == 1 ? printf("Yes\n") : printf("No\n");
	
	printf("Are %s and %s the same: ", name, long_name);
	team_same(long_name, name) == 1 ? printf("Yes\n") : printf("No\n"); 
	
	//test long_name
	printf("SHOUT %s: ", long_name);
	shout(long_name);
	
	return EXIT_SUCCESS;
}
