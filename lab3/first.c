#include <stdio.h>

int main (void) {

	float tempCelcius, tempFahrenheit;
	
	printf("Input Temperature in Celcius: ");
	scanf("%f", &tempCelcius);
	
	tempFahrenheit = ((9.0/5.0)*(tempCelcius)) + 32.0;
	
	printf("%.2f Celcius is %.2f Fahrenheit\n", tempCelcius, tempFahrenheit);
	
	return 0;
}
