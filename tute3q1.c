//IT18206906

#include<stdio.h>

int main()
{
	int n , sum;
	
	printf("Enter a value:\n");
	scanf("%d" , &n);

	sum = n * (n + 1) * (float)1 / 2;

	printf("Sum is %d\n" , sum);

	return 0;
}
