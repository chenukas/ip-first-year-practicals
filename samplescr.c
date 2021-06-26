//IT18206906

#include<stdio.h>

int main()
{
	int c = 0, tot, n;
	float avg;

	printf("Enter a number:");
	scanf("%d" , &n);
	
	while (n != 9999)
	{
		tot += n;
		c++;
	
		printf("Enter a number:");
		scanf("%d" , &n);

	}
	avg = tot / (float)c;
	
	printf("Average = %.2f\n" , avg);

	return 0;
}
