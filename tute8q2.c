//IT18206906

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, x, x1, x2;

	printf("a:");
	scanf("%f", &a);
	printf("b:");
	scanf("%f", &b);
	printf("c:");
	scanf("%f", &c);

	x = pow(b,2) - 4 * a * c;

	if(x >= 0)
	{
		x1 = (-b + sqrt(x)) / 2 * a;
		x2 = (-b - sqrt(x)) / 2 * a;
		printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
	}
	else
		printf("You can't get sqrt of negative number\n");

	return 0;
}
