//IT18206906

#include<stdio.h>
float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float basicSalary, float increment);

int main()
{
	int grade;
	float basicSalary, increment, total;

	printf("Enter Salary:");
	scanf("%f", &basicSalary);
	printf("Enter grade:");
	scanf("%d", &grade);
	
	increment = calculateIncrement(grade, basicSalary);

	total = calcTotSalary(basicSalary, increment);

	printf("Increment:%.2f\n", increment);
	printf("Total Salary:%.2f\n", total);

	return 0;
}

float calculateIncrement(int grade, float basicSalary)
{
	float increment;

	if(grade == 1)
		increment = basicSalary * 10.0 / 100;
	else if(grade == 2)
		increment = basicSalary * 15.0 / 100;
	else if(grade == 3)
		increment = basicSalary * 20.0 / 100;
	else
	{
		printf("The grade you have input is incorrect\n");
		return -1;
	}

	return increment;
}

float calcTotSalary(float basicSalary, float increment)
{
	return basicSalary + increment;
}
