/*
	Bryce Monaco
	
	This is an unfinished lab assignment meant for an exam review. The program is
	meant to do multiple functions to an array using a menu.
*/

int main (void) {
	int arrayRow, arrayCol;
	
	printf("Enter the size of the array (rows cols): ");
	scan("%d %d", &arrayRow, &arrayCol);
	
	mainArray[arrayRow][arrayCol];
	
	int userSelection = 9999;
	
	while (userSelection != 0) {
		printf("\t1. Input Elements\n\t2. Display Elements\n\t3. Sum of all elements");
		printf("\n\t4. Row-wise sum of elements\n\t5. Column-wise sum of elements");
		printf("\n\t6. Transpose elements into new array\n");
		
		printf("Enter a number corresponding to an above option (0 to exit): ");
		scanf("%d", &userSelection);
		
		switch userSelection {
			case 0:
				break;
			case 1:
				//Stopping here
	
	}
}
