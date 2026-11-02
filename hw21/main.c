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

	print_team(name);
	printf("'Colton' char count: %d\n", team_len(name));

	return EXIT_SUCCESS;
}
