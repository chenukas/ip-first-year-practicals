//IT18206906

#include<stdio.h>

int main()
{
	float num1, num2, ans;
	char operator;

	printf("Enter a number:\n");
	scanf("%f" , &num1);
	printf("Enter an operator:\n");
	scanf(" %c" , &operator);
	printf("Enter a number:\n");
	scanf("%f" , &num2);

	if (operator == '+')
		ans = num1 + num2;
	else if (operator == '-')
		ans = num1 - num2;
	else if (operator == '*')
		ans = num1 * num2;
	else if (operator == '/')
		ans = num1 / num2;
	else
		printf("Invalid Operator\n");

	printf("%.2f\n" , ans);

	return 0;
}
