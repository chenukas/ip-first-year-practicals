//IT18206906

#include<stdio.h>

int main()
{
	float busFare1;
	float busFare2;
	float busFare3;

	printf("Enter the first bus fare:\n");
	scanf("%f" , &busFare1);
	printf("Enter the second bus fare:\n");
	scanf("%f" , &busFare2);
	printf("Enter the third bus fare:\n");
	scanf("%f" , &busFare3);

	float totalFare = (busFare1 + busFare2 + busFare3) * 2 * 5 * 14;

	printf("Total Traveling Expenditure = %.2f\n" , totalFare);

	return 0;
}
