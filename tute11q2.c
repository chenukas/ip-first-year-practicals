//IT18206906

#include<stdio.h>

int main()
{
	int i, j;

	int matrix1[4][4] = {{5, 7, 8, 10}, {9, 3, 0, 6}, {8, 1, 9, 2}, {4, 7, 2, 1}};
	int matrix2[4][4] = {{2, 2, 1, 3}, {8, 1, 3, 1}, {1, 2, 2, 4}, {3, 1, 1, 2}};
	int matrix3[4][4];

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
