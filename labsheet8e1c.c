//IT18206906

#include<stdio.h>
void drawLinesWithRow(int rows);

int main()
{
	int r;

	printf("No. of Rows:");
	scanf("%d", &r);
	
	drawLinesWithRow(r);
	
	return 0;
}

void drawLinesWithRow(int rows)
{
	int i,j;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
