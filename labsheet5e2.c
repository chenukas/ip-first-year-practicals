//IT18206906

#include<stdio.h>

int main()
{
	int pNum , qty;
	float price;

	printf("Enter product number:\n");
	scanf("%d" , &pNum);
	printf("Enter quantity:\n");
	scanf("%d" , &qty);

	switch(pNum)
	{
		case 1:price = qty * 2.98;
		break;
		case 2:price = qty * 4.50;
		break;
		case 3:price = qty * 9.98;
		break;
		case 4:price = qty * 4.49;
		break;
		case 5:price = qty * 6.87;
		break;

		default:printf("Incorrect\n");
	}
	printf("Total retail price:%.2f\n" , price);

	return 0;
}
