/* 
* Author: Colton Bettinson
* Assignment: HW
* Demo client for variant header class
 */

#include <stdio.h>
#include <stdlib.h>
#include "variant.h"

int main(void) {
	//print_stat tests
	printf("print_stat test\n");

	struct Stat stat_1;
	stat_1.kind = STAT_SCORE;
	stat_1.value.score = 95;
	printf("Stat_1 -> ");
	print_stat(&stat_1);

	struct Stat stat_2;
	stat_2.kind = STAT_AVERAGE;
	stat_2.value.average = 85.79f;
	printf("Stat_2 -> ");
	print_stat(&stat_2);

	print_stat(nullptr);

	//set_score / set_average tests
	printf("\nset_score/set_average tests\n");

	set_average(&stat_1, 71.82f);
	printf("Stat_1 -> ");
	print_stat(&stat_1);
	
	printf("Stat_2 -> ");
	set_score(&stat_2, 73);
	print_stat(&stat_2);

	set_score(nullptr, 78);
	set_average(nullptr, 78.15f);

	//get_score / get_average tests
	printf("\nget_score/get_average tests\n");
	printf("Stat_1 score is %d\n", get_score(&stat_1));
	printf("Stat_1 average is %.2f\n", get_average(&stat_1));

	printf("Stat_2 score is %d\n", get_score(&stat_2));
	printf("Stat_2 average is %.2f\n", get_average(&stat_2));

	printf("NULL score is %d\n", get_score(nullptr));
	printf("Null average is %.2f\n", get_average(nullptr));

	//print_sizes test
	printf("\nprint_sizes test\n");
	print_sizes();

	

	return EXIT_SUCCESS;
}
