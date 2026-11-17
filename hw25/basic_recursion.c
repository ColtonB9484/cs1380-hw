
/*
* Author: Colton Bettinson
* Assignment: HW25
* Recursively calculations factorial(n) and fib(n).
* Recursively finds max value in array, and checks if a given string is a palindrome
*/

#include <stdio.h>
#include <stdlib.h>
#include "basic_recursion.h"

long long factorial(int n) {
	//precondition, n must be greater than 0
	// WHY: to ensure the base case n <= 1 doesn't trigger
	// automatically. it returns 0 to indicate that n was given
	// outside the range of the function. 
	if(n <= 0) return 0;
	
	if(n <= 1) return 1;
	
	return n * factorial(n - 1);
}

long long fib(int n) {
	//precondition, n must be greater than 0
	if(n <= 0) return 0;
	
	if(n < 2) return n;
	
	return fib(n - 1) + fib(n - 2);
}

/*I used ai to help me write this function. I commented what each
* part of the function does so I could make sure that I fully understood
* what was happening within this function
*/
int max_in_array(const int *a, int n) {
	//precondition and null check
	if(n <= 0 || a == nullptr) return 0;
	
	/* 
	* base case: when reaching the end of the aray, return the value. This will
	* then be compared with the value one element behind it in the array. 
	* The higher value will be returned as returned_max 
	*/
	if(n == 1) return a[0];

	/*
	* Capture the maximum value found after initial a[0]
	* a + 1 increments to the next element in the array(now considered a[0])
	* n - 1 deincrements to capture a[1] turning into a[0] in the recursive
	* call
	*/
	int returned_max = max_in_array(a + 1, n - 1);
	
	/*
	* compare current a[0] with returned_max
	* if the current a[0] is greater than returned_max, 
	* a[0] is returned as max
	* Otherwise, keep returned_max as max
	*/
	if(a[0] > returned_max) {
		return a[0];
	} else {
		return returned_max;
	}
}

int is_palindrome(const char *s, int i, int j) {
	if(s == nullptr) return 0;
	
	if(i >= j) return 1;

	if(s[i] == s[j]) {
		return is_palindrome(s, i + 1, j - 1);
	} else {
		return 0;
	}
}

