/*
	Bryce Monaco
	Lab 4 - Assignment 2
	
	Compile with the command "gcc assignment2.c -o assignment2 -std=c99"
*/

#include <stdio.h>

int main (void) {

	int factorialNum;	
	
	printf("Input a number to see its factorial: ");
	scanf("%d", &factorialNum);
	
	for (int i = factorialNum - 1; i > 1; i -= 1) {
		
		factorialNum = factorialNum * i;
		
	}
	
	printf("Factorial is: %d\n", factorialNum);
	
	return 0;
}
