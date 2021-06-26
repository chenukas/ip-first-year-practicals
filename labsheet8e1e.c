//IT18206906

#include<stdio.h>
void drawLinesWithRowCol(int rows, int cols);

int main()
{
	int r, c;

	printf("No. of Rows:");
	scanf("%d", &r);
	printf("No. of Columns:");
	scanf("%d", &c);
	
	drawLinesWithRowCol(r,c);
	
	return 0;
}

void drawLinesWithRowCol (int rows, int cols)
{
	int i,j;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
