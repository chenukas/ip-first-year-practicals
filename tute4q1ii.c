//IT18206906

#include<stdio.h>

int main()
{
	int marks;

	printf("Enter marks:\n");
	scanf("%d" , &marks);

	if (marks >= 45)
		printf("Pass\n");
	else
		printf("Fail\n");

	return 0;
}
