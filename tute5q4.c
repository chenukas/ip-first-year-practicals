//IT18206906

#include<stdio.h>

int main()
{
	char grade;

	printf("Enter grade:\n");
	scanf(" %c" , &grade);

	if (grade == 'A')
		printf("Excellent\n");
	else if (grade == 'B')
		printf("Good\n");
	else if (grade == 'C' || grade == 'c')
		printf("Ok\n");
	else
		printf("Needs improvement\n");
	
	return 0;
}
