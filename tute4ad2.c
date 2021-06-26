//IT18206906

#include<stdio.h>

int main()
{
	int noHours;
	float rent;


	printf("Enter no. of hours a car to be rented:\n");
	scanf("%d" , &noHours);
	
	if (noHours > 0 && noHours <= 5)
		rent = noHours * 1000.00;

	else if (noHours > 5 && noHours <= 14)
		rent = noHours * 1100.00;

	else if (noHours > 14 && noHours <= 24)
		rent = noHours * 1200.00;

	else 
		printf("You can rent a car for a maximum of 24 hours only!\n");
	
	printf("Rent = %.2f\n" , rent);
	
	return 0;
}
