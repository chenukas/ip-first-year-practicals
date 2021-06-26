//IT18206906

#include<stdio.h>

int main()
{
	int num;

	printf("Enter number:\n");
	scanf("%d" , &num);

	if (num > 0)
		printf("Number is positive\n");
	else if (num == 0)
		printf("Number is zero\n");
	else
		printf("Number is negative\n");

	return 0;
}
