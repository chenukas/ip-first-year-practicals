//IT18206906

#include<stdio.h>

int main()
{
	float usage[4][7] = {{1.2, 2.1, 0.8, 0.1, 1.0, 1.3, 4.0}, {1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2}, {2.3, 0.4, 1.2, 2.1, 0.8, 5.0, 2.6}, {2.1, 1.7, 7.0, 1.2, 2.1, 1.8, 2.7}};

	int i, j, week1, week2, day1, day2;
	float maximum = usage[0][0];
	float minimum = usage[0][0];
	float total = 0;
	float average = 0;
		
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 7; j++)
		{
			if(usage[i][j] > maximum)
			{
				maximum = usage[i][j];
				week1 = i + 1;
				day1 = j + 1;
			}
		}
	}

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 7; j++)
		{
			if(usage[i][j] < minimum)
			{
				minimum = usage[i][j];
				week2 = i + 1;
				day2 = j + 1;
			}
		}
	}

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 7; j++)
		{
			total = total + usage[i][j];
		}
	}

	average = total / 28.0;

	printf("The Summary Report of November - Usage of Electricity\n\n");
	printf("Day of the Month with maximum usage:%dweek %dday\n", week1, day1);
	printf("Maximum Usage in units:%.1f\n", maximum);
	printf("Day of the Month with minimum usage:%dweek %dday\n", week2, day2);
	printf("Minimum Usage in units:%.1f\n", minimum);
	printf("Average usage for the Month:%.2f\n", average);
	printf("Total usage for the Month:%.1f\n", total);
	
	return 0;
}
