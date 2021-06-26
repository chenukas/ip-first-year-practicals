//IT18206906

#include<stdio.h>

int main()						//main function begins
{
	int noYears;
	float basicSalary , bonus;

	printf("Enter no. of years worked:\n");		//inputs
	scanf("%d" , &noYears);
	printf("Enter basic salary:\n");
	scanf("%f" , &basicSalary);

	if (noYears < 3)				//conditions
		bonus = basicSalary * 50.0 / 100;

	else if (noYears >= 3 && noYears <= 5)
		bonus = basicSalary * 75.0 / 100;
	
	else
		bonus = basicSalary * 100.0 / 100;

	printf("Bonus is %.2f\n" , bonus);		//output

	return 0;
}
