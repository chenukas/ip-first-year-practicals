//IT18206906

#include<stdio.h>

int main()
{
	int number , d1 ,  d2 , d3 , d4 , d5 , rem;
	
	printf("Enter number with five digits:\n");
	scanf("%d" , &number);

	d1 = number / 10000;
	rem = number % 10000;
	d2 = rem / 1000;
	rem = rem % 1000;
	d3 = rem / 100;
	rem = rem % 100;
	d4 = rem / 10;
	rem = rem % 10;
	d5 = rem;

	if(d1 == d5 && d2 == d4)
		printf("This number is a palindrome\n");
	else
		printf("This number is not a palindrome\n");

	return 0;
}
