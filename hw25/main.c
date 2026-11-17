/* 
* Author: Colton Bettinson
* Assignment: HW25
* Demo app for basi_recursion header file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "basic_recursion.h"

int main(void) {
	//factorial test
	printf("1! = %lld\n", factorial(1));
	printf("3! = %lld\n", factorial(3));
	printf("4! = %lld\n", factorial(4));
	printf("5! = %lld\n", factorial(5));
	printf("10! = %lld\n", factorial(10));
	printf("0! = %lld\n", factorial(0));
	printf("-8! = %lld\n", factorial(-8));

	//fib test
	printf("\nfib(1) = %lld\n", fib(1));
	printf("fib(2) = %lld\n", fib(2));
	printf("fib(5) = %lld\n", fib(5));
	printf("fib(10) = %lld\n", fib(10));
	printf("fib(25) = %lld\n", fib(25));
	printf("fib(0) = %lld\n", fib(0));
	printf("fib(-2) = %lld\n", fib(-2));	

	//max_in_arry test
	int n = 6;
	int double_max[6] = {4, 8, 10, 4, 10, 7};
	int first_max[6] = {23, 5, 8, 6, 3, 9};
	int last_max[6] = {4, 7, 9, 1, 4, 20};
	int negatives[6] = {-1, -6, -6, -7, -10, -8};
	int zero_max[6] = {-5, -9, -4, 0, -10, -50};
	int one_max[6] = {4};
	
	printf("\nMax(10): %d\n", max_in_array(double_max, n));
	printf("Max(23): %d\n", max_in_array(first_max, n));
	printf("Max(20): %d\n", max_in_array(last_max, n));
	printf("Max(-1): %d\n", max_in_array(negatives, n));
	printf("Max(0): %d\n", max_in_array(zero_max, n));
	printf("Max(4): %d\n", max_in_array(one_max, 1));
	printf("Null Test: %d\n", max_in_array(nullptr, n));
	printf("n <= 0: %d\n", max_in_array(last_max, 0));
	
	//is_palindrom test
	char palindrome_1[] = {"tacocat"};
	char palindrome_2[] = {"racecar"};
	char palindrome_3[] = {"abba"};
	char non_palindrome_1[] = {"racebar"};
	char non_palindrome_2[] = {"abca"};
	
	if(is_palindrome(palindrome_1, 0, strlen(palindrome_1) - 1) == 1) {
		printf("\n%s is a palindrome\n", palindrome_1);
	} else {
		printf("\n%s is not a palindrome\n", palindrome_1);
	}

	if(is_palindrome(palindrome_2, 0, strlen(palindrome_2) - 1) == 1) {
		printf("%s is a palindrome\n", palindrome_2);
	} else {
		printf("%s is not a palindrome\n", palindrome_2);
	}

	if(is_palindrome(palindrome_3, 0, strlen(palindrome_3) - 1) == 1) {
		printf("%s is a palindrome\n", palindrome_3);
	} else {
		printf("%s is not a palindrome\n", palindrome_3);
	}

	if(is_palindrome(non_palindrome_1, 0 , strlen(non_palindrome_1) - 1) == 1) {
		printf("%s is a palindrome\n", non_palindrome_1);
	} else {
		printf("%s is not a palindrome\n", non_palindrome_1);
	}

	if(is_palindrome(non_palindrome_2, 0, strlen(non_palindrome_2) - 1) == 1) {
		printf("%s is not a palindrome\n", non_palindrome_2);
	} else {
		printf("%s is not a palindrome\n", non_palindrome_2);
	}
	
	return EXIT_SUCCESS;
}

