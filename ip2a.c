//IT18206906

#include<stdio.h>
#include<assert.h>
int divide(int a, int b);
int remainder(int a, int b);
int maximum(int a, int b);
void testMaximum();

int main()
{
	int number, fourthDigit, digit1, digit2, digit3, rem, max1, max2, max;

	testMaximum();
	
	printf("Please input the number:");
	scanf("%d", &number);

	fourthDigit = divide(number,1000);

	digit1 = divide(number,100);
	rem = remainder(number,100);
	digit2 = divide(rem,10);
	digit3 = remainder(rem,10);

	if(forthDigit > 0 || digit1 == 0 || (digit1 == 0 && digit2 == 0))
	{
		printf("The entered number is wrong.\n");
		return -1;
	}
	
	max1 = maximum(digit1, digit2);
	max2 = maximum(digit1, digit2);
	max = maximum(max1, max2);

	printf("The largest digit is: %d\n", max);

	return 0;
}

int divide(int a, int b)
{
	return a / b;
}

int remainder(int a, int b)
{
	return a % b;
}

int maximum(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

void testMaximum()
{
	assert(maximum(5,3) == 5);
	assert(maximum(8,4) == 8);
	assert(maximum(2,6) == 6);
	assert(maximum(7,9) == 9);
	printf("Unit testing passed.\n");
}
	
	