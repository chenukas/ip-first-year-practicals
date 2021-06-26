//IT18206906

#include<stdio.h>
int calAdd(int x, int y);
int calMultiple(int x, int y);
int calSquare(int x);

int main()
{
	int a, b, c, d;

	a = calMultiple(3,4);
	b = calMultiple(5,7);
	c = calAdd(a,b);
	d = calSquare(c);

	printf("Answer = %d\n", d);

	return 0;
}

int calAdd(int x, int y)
{
	return x + y;
}

int calMultiple(int x, int y)
{
	return x * y;
}

int calSquare(int x)
{
	return x * x;
}
