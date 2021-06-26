//IT18206906

#include<stdio.h>
float circleArea(float r);

int main()
{
	float radius, area;

	printf("Radius of circle:");
	scanf("%f", &radius);

	area = circleArea(radius);

	printf("Area = %.2f\n", area);

	return 0;
}

float circleArea(float r)
{
	return 22 / 7.0 * r * r;
}
	
