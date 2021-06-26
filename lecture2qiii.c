//IT18206906

//including header file
#include<stdio.h>

//main function begins
int main()
{
	int n1;					//declaring variables
	int n2;
	int sum;

	printf("Enter the first number\n");	//display
	scanf("%d" , &n1);			//first input
	printf("Enter the second number\n");	//display
	scanf("%d" , &n2);			//second input

//calculation
	sum = n1 + n2;

//output
	printf("Total is %d\n" , sum);

	return 0;
}
