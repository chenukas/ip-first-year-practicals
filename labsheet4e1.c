//IT18206906

#include<stdio.h>

int main()
{
	int number;

	printf("Enter a Number:\n");
	scanf("%d" , &number);

	if(number % 2 == 0)
		printf("Even Number\n");
	else
		printf("Odd Number\n");
	
	return 0;
}
