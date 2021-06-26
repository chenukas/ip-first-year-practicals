//Sumanasekara C.V.
//IT18206906
//G2-S2
//SLIIT

//This program will convert temperatures between Fahrenheit and Celsius

#include<stdio.h>

//function main begins program execution
int main(void)
{
	double Celsius , Fahrenheit , Ctemp , Ftemp;		//declaring variables
	Fahrenheit = 78.5;					//assigning value
	
//calculation
	Celsius = (Fahrenheit - 32) * 5.0/9.0;
	
	Ctemp = Celsius;					//assigning value

//calculation
	Ftemp = 9.0 / 5.0 * Celsius + 32;

//output displays
	printf("%.2f degrees Fahrenheit is %.2f" , Fahrenheit , Celsius);
	printf("degrees Celsius.\n");
	printf("%.2f degrees Celsius is %.2f" , Ctemp , Ftemp);
	printf("degrees Fahrenheit.\n");
	
	return 0;
} 
//end of main function
