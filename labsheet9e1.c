//IT18206906

#include<stdio.h>
int multiple(int x, int y);

int main()
{
	int num1, num2, count = 1;

	while(count <= 5)
	{
		printf("First number:");
		scanf("%d", &num1);
		printf("Second number:");
		scanf("%d", &num2);

		if(multiple(num1, num2))
		{
			printf("%d is a multiple of %d\n", num2, num1);
		}
		else
		{
			printf("%d is NOT a multiple of %d\n", num2, num1);
		}
		count++;
	}
	return 0;
}

int multiple(int x, int y)
{
	if(y % x == 0)
		return 1;
	else
		return 0;
}
