//IT18206906
//to take sum of a sequence of integers.
#include<stdio.h>

int main()						//main function begins
{
	int counter = 0 , num , n , sum = 0;		//declaring variables

	printf("Enter a number:");			//taking inputs
	scanf("%d" , &num);

	sum += num;				
	
	while (counter < num)				//repetition
	{
		printf("Enter a number:");
		scanf("%d" , &n);
		sum +=n;
		++counter;
	}

	printf("Sum = %d\n" , sum);			//displaying output
	
	return 0;
}
