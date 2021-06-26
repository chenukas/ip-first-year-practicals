//IT18206906

#include<stdio.h>
void drawLines();

int main()
{
	drawLines();
	return 0;
}

void drawLines()
{
	int i,j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
