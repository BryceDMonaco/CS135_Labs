/*
	Bryce Monaco
	
	Lab 9 Assignment 2
	
	Compile with "gcc assignment2.c -o a2 -std=c99"

*/

#include <stdio.h>

int main (void) {
	int array1[5], array2[5];
	
	for (int i = 1; i < 6; i++) {
		array1[i - 1] = i;
	
		array2[i - 1] = i + 5;
		
	}
	
	int* array14 = &array1[3];
	int* array24 = &array2[3];
	
	int temp = *array14;
	
	array1[3] = *array24;
	array2[3] = temp;
	
	printf("1-4 is %d and 2-4 is %d\n", array1[3], array2[3]);
	
	return 0;
	
}
