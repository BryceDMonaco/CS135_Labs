/*
	Bryce Monaco
	Lab 8 - Assignment 1
	
	Doubles any number
	Requires no special compile commands.
*/


#include <stdio.h>

int doubleNumber (int number);

int main (void) {
	int userInt;
	
	printf("Enter an integer to double: ");
	scanf("%d", &userInt);
	
	printf("You entered %d, ", userInt);
	
	userInt = doubleNumber(userInt);
	
	printf("%d doubled is %d.\n", userInt/2, userInt);
	
	return 0;
	
}

int doubleNumber (int number) {
	printf("%d will be doubled, ", number);
	
	number *= 2;
	return number;
	
}
