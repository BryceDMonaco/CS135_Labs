/*
	Bryce Monaco
	CS135-1201
	
	Assignment 1
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main (void) {
	srand(time(NULL));
	
	int randArray[9][9] = {0}, colSum[9] = {0}, rowSum[9] = {0}; //Sets the value [0][0] to 0 and the rest become 0
	int i, ii, j, jj, a, aa, b, bb; //i vars for 2d array assignment, j for 2d array output, a for column stuff, b for row stuff
	
	//Assignment
	for (i = 0; i < 9; i++) { //Moves to next row
		for (ii = 0; ii < 9; ii++) { //Changes each value in a row
			int randNum = rand() % 100;
			
			randArray[i][ii] = randNum; //Sets the value in row i column ii to the random value		
			
		}
	}
	
	//Printing Array
	for (j = 0; j < 9; j++) {
		for (jj = 0; jj < 9; jj++) {
			printf("\t[%02d] ", randArray[j][jj]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n\tColumn Sum:\n");
	
	//Column Stuff
	for (a = 0; a < 9; a++) {
		for (aa = 0; aa < 9; aa++) {
			colSum[a] += randArray[aa][a];	

		}
		
		printf("\t[%d] ", colSum[a]);
		
	}

	printf("\n\n\tRow Sum:\n");	
	
	//Row Stuff
	for (b = 0; b < 9; b++) {
		for (bb = 0; bb < 9; bb++) {
			rowSum[b] += randArray[b][bb];
		
		}
		
		printf("\t[%d]\n ", rowSum[b]);
	}
	
	printf("\n");
	
	return 0;
	
	

}
