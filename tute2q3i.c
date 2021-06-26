//IT18206906

#include<stdio.h>

//main function begins
int main()
{
	float length, width;			//declaring variables

	printf("Enter the length:\n");
	scanf("%f" , &length);
	printf("Enter the width:\n");
	scanf("%f" , &width);

//calculation
	float perimeter = 2 * (length + width);
	float area = length * width;

	printf("Perimeter = %.2f\nArea = %.2f\n" , perimeter , area);

	return 0;
}
//end main function
