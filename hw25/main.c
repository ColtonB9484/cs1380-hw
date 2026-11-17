/* 
* Author: Colton Bettinson
* Assignment: HW25
* Demo app for basi_recursion header file
 */

#include <stdio.h>
#include <stdlib.h>
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
	printf("fib(1) = %lld\n", fib(1));
	printf("fib(2) = %lld\n", fib(2));
	printf("fib(5) = %lld\n", fib(5));
	printf("fib(10) = %lld\n", fib(10));
	printf("fib(25) = %lld\n", fib(25));
	printf("fib(0) = %lld\n", fib(0));
	printf("fib(-2) = %lld\n", fib(-2));	

	return EXIT_SUCCESS;
}

