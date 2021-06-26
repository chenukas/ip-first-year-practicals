//IT18206906

#include<stdio.h>
#include<string.h>
#include<assert.h>
float getTicketPrice(char tType);
float calcAmount(int noTickets, float price);
void testCalAmount();

int main()
{
	char tType;
	int noTickets;
	float price, amount;

	testCalAmount();
	
	printf("Enter type of the ticket(Elders - E, Age below 18 years - Y, School children - S):");
	scanf(" %c", &tType);
	printf("Enter the number of tickets:");
	scanf("%d", &noTickets);

	price = getTicketPrice(tType);
	
	amount = calcAmount(noTickets, price);

	printf("Total amount of Tickets: %.2f\n", amount);

	return 0;
}

float getTicketPrice(char tType)
{
	float tPrice;

	if(tType == 'E')
	{
		tPrice = 150.00;
	}
	else if(tType == 'Y')
	{
		tPrice = 100.00;
	}
	else if(tType == 'S')
	{
		tPrice = 50.00;
	}
	else
	{
		printf("Invalid ticket type\n");
		return -1;
	}	

	return tPrice;
}

float calcAmount(int noTickets, float price)
{
	float discount, tAmount;

	if(noTickets >= 5 && noTickets < 10)
	{
		discount = noTickets * price * 5.0 / 100;
		tAmount = (noTickets * price) - discount;
	}
	else if(noTickets >= 10)
	{
		discount = noTickets * price * 10.0 / 100;
		tAmount = (noTickets * price) - discount;
	}
	else
	{
		tAmount = noTickets * price;
	}

	return tAmount;
}

void testCalAmount();
{
	assert(calcAmount(8,100) == 760);
	assert(calcAmount(15,150) == 2025);
	printf("Unit testing passed\n");
}
	