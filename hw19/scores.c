/*
* Author: Colton Bettinson
* Assignment: HW19
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "scores.h"

void print_scores(const int scores[], int n) {
	if(scores == NULL || n <= 0) {
		return;
	}

	printf("Scores: ");
	for(int i = 0; i < n; i++) {
		printf("%d ", scores[i]);
	}
	printf("\n");
}

int score_at(const int scores[], int n, int index) {
	if(scores == NULL || n <= 0 || index < 0 || index > n - 1) {
		return 0;
	}

	return scores[index];
}

int sum_scores(const int scores[], int n) {
	if(scores == NULL || n <= 0) {
		return 0;
	}
	
	int sum = 0;

	for(int i = 0; i < n; i++) {
		sum += scores[i];
	}

	return sum;
}

int max_score(const int scores[], int n) {
	if(scores == NULL || n <= 0) {
		return 0;
	}
	
	int max = 0;
	for(int i = 0; i < n; i++) {
		if(scores[i] > max) {
			max = scores[i];
		}
	}

	return max;
}

int count_at_least(const int scores[], int n, int threshold) {
	if(scores == NULL || n <= 0) {
		return 0;
	}

	int count = 0;

	for(int i = 0; i < n; i++) {
		if(scores[i] >= threshold) {
			count++;
		}
	}

	return count;
}

void print_board(const int board[][GAMES], int nteams){
	if(board == NULL || nteams <= 0) {
		return;
	}
	
	printf("Board: \n");
	for(int i = 0; i < nteams; i++) {
		for(int j = 0; j < GAMES - 1; j++) {
			printf("%d ", board[j][i]);
		}
		printf("\n");
	}
}

int board_sum(const int board[][GAMES], int nteams) {
	if(board == NULL || nteams <= 0) {
		return 0;
	}

	int sum = 0;

	for(int i = 0; i < nteams; i++) {
		for(int j = 0; j < GAMES; j++) {
			sum += board[i][j];
		}
	}

	return sum;
}

