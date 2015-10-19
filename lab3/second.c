#include <stdio.h>
//Possible combos: 123 132 213 231 312 321
int main (void) {
	int firstNum, secondNum, thirdNum;
	
	printf("Input three integers, seperated by spaces: ");
	scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
	
	if (firstNum < secondNum) {
		if (secondNum < thirdNum) { //output 1 2 3
			printf("%d < %d < %d\n", firstNum, secondNum, thirdNum);
		}else if (secondNum > thirdNum) { //output 1 3 2
			printf("%d < %d < %d\n", firstNum, secondNum, thirdNum);
		}
	} else if (firstNum > secondNum) {
		if (firstNum < thirdNum) { //output 2 1 3
			printf("%d < %d < %d\n", secondNum, firstNum, thirdNum);
		} else if (firstNum > thirdNum) { //output 2 3 1
			printf("%d < %d < %d\n", secondNum, thirdNum, firstNum);
		}
	} else if (thirdNum < firstNum) {
		if (firstNum < secondNum) { //output 3 1 2
			printf("%d < %d < %d\n", thirdNum, firstNum, secondNum);
		} else if (firstNum > secondNum) { //output 3 2 1
			printf("%d < %d < %d\n", thirdNum, secondNum, firstNum);
		}
	}
	
	return 0;
}
