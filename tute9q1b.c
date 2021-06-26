//IT18206906

#include<stdio.h>
#include<assert.h>
#include<math.h>
double hypotenuse(double side1, double side2);

int main()
{
	double tSide1, tSide2;

	assert(fabs(hypotenuse(3.0,4.0) - 5.0) < 0.000001);
	assert(fabs(hypotenuse(5.0,12.0) - 13.0) < 0.000001);
	assert(fabs(hypotenuse(8.0,15.0) - 17.0) < 0.000001);
	printf("Assertion passed\n");
	
	printf("Side 1:");
	scanf("%lf", &tSide1);
	printf("Side 2:");
	scanf("%lf", &tSide2);

	printf("Hypotenuse = %.1f\n", hypotenuse(tSide1, tSide2));

	return 0;
}

double hypotenuse(double side1, double side2)
{
	return sqrt(pow(side1,2) + pow(side2,2));
}

