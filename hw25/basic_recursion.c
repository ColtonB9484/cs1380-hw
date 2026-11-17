
/*
* Author: Colton Bettinson
* Assignment: HW25
* Recursively calculations factorial(n) and fib(n)
*/

#include <stdio.h>
#include <stdlib.h>
#include "basic_recursion.h"

long long factorial(int n) {
	//precondition, n must be greater than 0
	if(n <= 0) return 0;
	
	//base case
	if(n <= 1) return 1;
	
	return n * factorial(n - 1);
}

long long fib(int n) {
	//precondigion, n must be greater than 0
	if(n <= 0) return 0;
	
	//base case
	if(n < 2) return n;
	
	return fib(n - 1) + fib(n - 2);
}

int max_in_array(const int *a, int n) {

}

int is_palindrome(const char *s, int i, int j) {

}

