/* 
* Author: Colton Bettinson
* Assignment: HW
*
 */

#include <stdio.h>
#include <stdlib.h>
#include "variant.h"

int main(void) {
	struct Stat score;
	score.kind = STAT_SCORE;
	score.value.score = 95;
	print_stat(&score);

	struct Stat average;
	average.kind = STAT_AVERAGE;
	average.value.average = 85.79f;
	print_stat(&average);

	print_stat(nullptr);

	return EXIT_SUCCESS;
}
