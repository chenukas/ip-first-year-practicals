//IT18206906

#include<stdio.h>

int main()
{
	float depositAmount , interestRate , interestAmount;	
	char userChoice;

	userChoice = 'y';

	while(userChoice == 'y' || userChoice == 'Y')
	{
		printf("Enter the deposit amount:");
		scanf("%f" , &depositAmount);
		printf("Enter the interest rate:");
		scanf("%f" , &interestRate);

		interestAmount = depositAmount * ((1 + interestRate / 100.0) * (1 + interestRate / 100.0));
	
		printf("Interest Amount = %.2f\n" , interestAmount);
	
		printf("Do you have more customers to calculate the interest?(Y - Yes, N - No):");
		scanf(" %c" , &userChoice);
	}
	
	return 0;
}	
	
