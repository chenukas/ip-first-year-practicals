//IT18206906
//to find the smallest

#include<stdio.h>

int main()
{
	int counter = 0 , n , num , min;

	printf("Enter a number:");
	scanf("%d" , &num);

	min = num;

	while (counter < num)
	{
		printf("Enter a number:");
		scanf("%d" , &n);

		if (n < min)
		{
			min = n;
		}
		++counter;
	}
	
	printf("%d is the smallest\n" , min);

	return 0;
}
