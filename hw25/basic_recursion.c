
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
	//precondition and null check
	if(n <= 0 || a == nullptr) return 0;
	
	//base case: return last element of array regardless
	if(n == 1) return a[0];

	//saves returned max value found farther in array.
	int returned_max = max_in_array(a + 1, n - 1);
	
	//compare current a[0] with returned max
	if(a[0] > returned_max) {
		return a[0];
	} else {
		return returned_max;
	}
}

// 0 -> false : 1 -> true
int is_palindrome(const char *s, int i, int j) {
	//null check
	if(s == nullptr) return 0;
	
	//base case: once i and j meet or instersect, it is a palindrome	
	if(i == j || i > j) return 1;

	//if ends match, check if the next letters match
	if(s[i] == s[j]) {
		return is_palindrome(s, i + 1, j - 1);
	} else {
		return 0;
	}
}

