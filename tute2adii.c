//IT18206906

#include<stdio.h>

int main()
{
	double mTons , Ounces;
	
	printf("Enter the weight in ounces:\n");
	scanf("%lf" , &Ounces);
	
	mTons = Ounces / 35273.92;
	int noBoxes = 35273.92 / Ounces;

	printf("Weight in metric tons = %f\nNo. of Boxes : %d\n" , mTons , noBoxes);

	return 0;
}
