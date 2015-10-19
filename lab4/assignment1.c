/*
	Bryce Monaco
	Lab 4 - Assignment 1
	
	No special compile commands
*/
#include <stdio.h>

int main (void) {
	int facNumber, loopCounter;
	
	printf("Input a number to see its factorial: ");
	scanf("%d", &facNumber);
	
	loopCounter = facNumber;
	
	while (loopCounter > 1) {
		loopCounter -= 1;
		
		facNumber = facNumber * loopCounter;
	}
	
	printf("Factorial is: %d\n", facNumber);
	
	return 0;
}
