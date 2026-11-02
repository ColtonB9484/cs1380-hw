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
	char other_name[] = "Brian";
	char long_name[] = "Bettinson";
	int name_size = sizeof(name) / sizeof(name[0]);

	print_team(name);
	printf("'Colton' char count: %d\n", team_len(name));
	team_copy(name, name_size, long_name);
	print_team(name);
	
	return EXIT_SUCCESS;
}
