/*
	Bryce Monaco
	Lab 8 - Assignment 2
	
*/

#include <stdio.h>

float calcSlope (int x1, int x2, int y1, int y2);
float calcIntercept (int x, int y, float slope);

int main (void) {
	int firstX, firstY, secondX, secondY;
	float lineSlope, lineIntercept;
	
	printf("Enter the first point as \"x y\": ");
	scanf("%d %d", &firstX, &firstY);
	
	printf("Enter the second point as \"x y\": ");
	scanf("%d %d", &secondX, &secondY);
	
	lineSlope = calcSlope(firstX, secondX, firstY, secondY);
	lineIntercept = calcIntercept(firstX, firstY, lineSlope);
	
	if (lineIntercept > 0) {
		printf("Equation: y = %fx + %f\n", lineSlope, lineIntercept);
	
	} else if (lineIntercept == 0) {
		printf("Equation: y = %fx\n", lineSlope);
	
	} else if (lineIntercept < 0) {
		printf("Equation: y = %fx - %f\n", lineSlope, (lineIntercept * -1));
	
	}
	
	
}

float calcSlope (int x1, int x2, int y1, int y2) {
	float slope = (y2 - y1)/(x2 - x1);
	
	return slope;

}

float calcIntercept (int x, int y, float slope) {
	//y = mx + b
	float intercept = y - (x*slope);
	
	return intercept;

}
