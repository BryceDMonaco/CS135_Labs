/*
	Bryce Monaco
	
	This is an unfinished lab assignment meant for an exam review. The main idea was
	to generate a pascal matrix.
	
	Output should be:
	1	1	1	1	1
	1	2	3	4	5
	1	3	6	10	15
	1	4	10	20	35
	1	5	15	35	70
	
	but currently is:
	1	1	1	1	1
	1	2	2	2	3
	1	2	2	4	4
	1	2	4	5	3
	1	2	5	6	5
*/

#include <stdio.h>

int generateValue(int row, int col, int arr[row][col]);

int main (void) {
	int arraySize;
	
	printf("Enter the array size: ");
	scanf("%d", &arraySize);
	
	int matrix[arraySize][arraySize];
	
	for (int i = 0; i < arraySize; i++) {
		for (int j = 0; j < arraySize; j++) {
			matrix[i][j] = generateValue(i, j, matrix);
		
		}
	}
	
	for (int i = 0; i < arraySize; i++) {
		for (int ii = 0; ii < arraySize; ii++) {
			printf("\t%d", matrix[i][ii]);
		
		}
		
		printf("\n");
	
	}
	
	return 0;

}

int generateValue (int row, int col, int arr[row][col]) {
	if (row == 0 || col == 0) {
		return 1;
	
	} else {
		int value = arr[row - 1][col] + arr[row][col - 1];
		
		return value;
	
	}
}
