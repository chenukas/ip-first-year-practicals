//IT18206906

#include<stdio.h>

//main function begins
int main()
{
	float rad , dia , circ , area;
	
	printf("Enter the radius:\n");
	scanf("%f" , &rad);
	
//calculations
	dia = 2 * rad;
	circ = 2 * 3.14159 * rad;
	area = 3.14159 * rad * rad;

	printf("Diameter = %.2f\nCircumference = %.2f\nArea = %.2f\n" , dia , circ , area);

	return 0;
}
//end main function
