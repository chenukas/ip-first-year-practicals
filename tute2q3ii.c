//IT18206906

#include<stdio.h>

//main function begins
int main()
{
	float num1 , num2 , sum , avg;
	
	printf("Enter the first number:\n");
	scanf("%f" , &num1);
	printf("Enter the second number:\n");
	scanf("%f" , &num2);

//calculation
	sum = num1 + num2;
	avg = sum / 2;

	printf("Sum = %.2f\nAverage = %.2f\n" , sum , avg);

	return 0;
}
