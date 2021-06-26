//IT18206906

//This program will convert temperatures between Fahrenheit and Celsius

#include<stdio.h>

//function main begins program execution
int main(void)
{
	double Celsius, Fahrenheit;		//declaring variables
	Fahrenheit = 95.0;			//assigning value

//calculation
	Celsius = (Fahrenheit - 32) * 5.0/9.0;

//output displays
	printf("%.2f degrees Fahrenheit is %.2f" , Fahrenheit, Celsius);
	printf("degrees Celsius.\n");
	
	return 0;
} 
//end of main function
	
	

