//IT18206906

#include<stdio.h>

int main()
{
	int noHours;
	float hourlyRate , grossPay;

	printf("Enter number of hours worked:\n");
	scanf("%d" , &noHours);
	printf("Enter hourly rate:\n");
	scanf("%f" , &hourlyRate);

	if (noHours <= 40)
	{
		grossPay = noHours * hourlyRate;
		printf("Gross Pay = %.2f\n" , grossPay);
	}
	else
	{
		grossPay = 40 * hourlyRate + (noHours - 40) * hourlyRate * 1.5;
		printf("Gross Pay = %.2f\n" , grossPay);
	}

	return 0;
}
