/*
	Bryce Monaco
	
	Lab Assignment 1

*/

#include <stdio.h>

int main (void) {
	long int input_number;
	long int* addressInputNumber = &input_number;
	
	printf("Input a number: ");
	scanf("%ld", addressInputNumber);
	
	printf("The number you entered is %ld.\n", input_number);
	
	return 0;

}
