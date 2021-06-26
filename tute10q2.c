//IT18206906

#include<stdio.h>

int main()
{
	int i, mark, sum=0;
	int marks[15] = {0};
	float avg;

	for(i = 0; i <=14;)
	{
		printf("Enter mark %d:", i+1);
		scanf("%d", &mark);

		if(mark >= 0 && mark <= 20)
		{
			marks[i] = mark;
			i++;
		}
	}
	
	for(i = 0; i <= 14; ++i)
	{
		sum += marks[i];
	}

	avg = sum / (float)i;

	printf("Mean = %.2f\n", avg);

	return 0;
}
