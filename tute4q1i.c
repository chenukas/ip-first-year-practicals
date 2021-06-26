//IT18206906

#include<stdio.h>

int main()
{
	int num1 , num2;

	printf("Enter first number:\n");
	scanf("%d" , &num1);
	printf("Enter second number:\n");
	scanf("%d" , &num2);

	if (num1 > num2)
		printf("%d is the largest\n" , num1);
	else
		printf("%d is the largest\n" , num2);

	return 0;
}
