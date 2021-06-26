//IT18206906

#include<stdio.h>

int main()
{
	int no;

	printf("Enter a number:\n");
	scanf("%d" , &no);

	if(no == 10)
		printf("10\n");
	else if(no == 20)
		printf("20\n");
	else
		printf("Invalid Number\n");

	return 0;
}
