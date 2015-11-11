/*
	Bryce Monaco
	CS135-1201
	
	Lab 11 - Assignment 2
	
	Compile with "gcc assignment2.c -o a2 -std=c99"
*/

#include <stdio.h>

void PrintRowSum (int *array, int *outArray);
void PrintColSum (int *array, int *outArray);
void TransposeArray (int *array);

int main (void)
{
	int array[3][3], rowSums[3] = {0}, colSums[3] = {0};
	
	printf("Enter 9 integers, separated by spaces: ");
	
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 3; ii++)
		{
			scanf("%d", &array[i][ii]);
		
		}
	
	}
	
	/* Uncomment this loop to print the initial loop (debug)
	
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 3; ii++)
		{
			printf("\t%d", array[i][ii]);
		
		}
		
		printf("\n");
	}
	*/
	
	PrintRowSum(&array[0][0], &rowSums[0]);
	PrintColSum(&array[0][0], &colSums[0]);
	
	printf("\n Array, with row sums to the left and col sums on top:\n");
	
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			for (int ii = 0; ii < 3; ii++)
			{
				printf("\t%d", colSums[ii]);
			
			}
			
			printf("\n--------------------------\n");
		
		}
		
		printf("%3d |", rowSums[i]);
		
		for (int ii = 0; ii < 3; ii++)
		{
			printf("\t%d", array[i][ii]);
		
		}
		
		printf("\n");
	
	}
	
	printf("Transposed Array:\n");
	
	TransposeArray(&array[0][0]);
	
	return 0;
	
}

void PrintRowSum (int *array, int *outArray)
{	
	for (int i = 0; i < 3; i++)
	{	
		for (int ii = 0; ii < 3; ii++)
		{
			*(outArray + i) += *((int *)array + i * 3 + ii);
		
		}
	}
	
	return;

}

void PrintColSum (int *array, int *outArray)
{
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 3; ii++)
		{
			*(outArray + i) += *((int *)array + ii * 3 + i);
		
		}
	}
	
	return;
	
}

void TransposeArray (int *array)
{
	for (int i = 0; i < 3; i++)
	{
		for (int ii = 0; ii < 3; ii++)
		{
			printf("\t%d", *((int *)array + ii * 3 + i));
		
		}
		
		printf("\n");
	}

}

