//IT18206906

#include<stdio.h>

int main()
{
	int no1 , no2;

	printf("Enter two numbers:\n");
	scanf("%d%d" , &no1 , &no2);

	if(no1 > no2)
	{
		printf("%d is the largest.\n" , no1);
	}
	else
	{
		printf("%d is the largest.\n" , no2);
	}

	return 0;
}
