#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

int main(void) {
	int scores[] = {12, 8, 15, 10, 9};
	int scores_size = sizeof(scores) / sizeof(int);
	int board[][GAMES] = {
		{12, 8, 15, 10},
		{9, 11, 7, 14},
		{13, 6, 16, 8}
	};
	int board_rows = sizeof(board) / sizeof(board[0]);

	//print_scores test
	print_scores(scores, scores_size);
	printf("n = %d\n", scores_size);
	printf("NULL call: \n");
	print_scores(NULL, scores_size);

	//score_at test
	printf("score_at 2: %d\n", score_at(scores, scores_size, 2));
	printf("score_at 9: %d\n", score_at(scores, scores_size, 9));

	//sum_scores test
	printf("Sum = %d\n", sum_scores(scores, scores_size));

	//max_score test
	printf("Max = %d\n", max_score(scores, scores_size));

	//count_at_least test
	printf("count >= 10: %d\n", count_at_least(scores, scores_size, 10));

	//print_board test
	print_board(board, board_rows);

	//board_sum test
	printf("Board Sum: %d\n", board_sum(board, board_rows)); 

	return EXIT_SUCCESS;
}
