//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int size, marks, total=0;
	float avg;

	printf("Enter no. of students:");
	scanf("%d" , &size);

	int stmarks[size][3];
	int i, j;

	for(i = 0; i < size; i++)
	{
		printf("Student %d\n", i+1);
		
		for(j = 0; j < 3; j++)
		{
			printf("Score %d:", j+1);
			scanf("%d", &stmarks[i][j]);
		}
		printf("\n");

	}

	printf("Student No\tExam Scores\t\tAverage\n");
	for(i = 0; i < size; i++)
	{
		total = 0;
		printf("%d\t\t" , i+1);
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", stmarks[i][j]);
			total = total + stmarks[i][j];
		}

		avg = total / 3.0;

		printf("%.2f\n", avg);
	}

	return 0;
}
