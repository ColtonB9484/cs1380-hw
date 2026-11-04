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

	//print_label test
	print_label(team_a);
	printf("Label length = %d\n", label_len(team_a));
	print_label(team_b);
	printf("Label length = %d\n", label_len(team_b));

	return EXIT_SUCCESS;
}
