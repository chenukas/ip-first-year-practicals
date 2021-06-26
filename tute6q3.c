//IT18206906

#include<stdio.h>

int main()
{
	int counter = 1 , accNo;
	float creditLimit , newClimit , currentBal;

	while (counter <= 3)
	{
		printf("Enter the account number:");
		scanf("%d" , &accNo);

		printf("Enter the credit limit before the recession:");
		scanf("%f" , &creditLimit);

		printf("Enter the current balance of customer:");
		scanf("%f" , &currentBal);

		newClimit = creditLimit / 2.0;

		printf("New Credit Limit = %.2f\n" , newClimit);

		if (currentBal > newClimit)
		{
			printf("This customer has current balance that exceed new credit limit\n");
		}

		++counter;
	}
	
	return 0;
}
