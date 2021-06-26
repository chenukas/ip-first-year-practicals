//IT18206906

#include<stdio.h>
void drawLinesWithRowColCharacter(int rows, int cols, char character);

int main()
{
	int r, c;
	char ch;

	printf("Height:");
	scanf("%d", &r);
	printf("Width:");
	scanf("%d", &c);
	printf("Character:");
	scanf(" %c", &ch);	

	drawLinesWithRowColCharacter(r,c,ch);
	
	return 0;
}

void drawLinesWithRowColCharacter(int rows, int cols, char character)
{
	int i,j;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("%c",character);
		}
		printf("\n");
	}
}
