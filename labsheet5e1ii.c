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

	switch(operator)
	{	
		case '+':ans = num1 + num2;
		break;
		case '-':ans = num1 - num2;
		break;
		case '*':ans = num1 * num2;
		break;
		case '/':ans = num1 / num2;
		break;
		default:printf("Invalid Operator\n");
	}
	printf("%.2f\n" , ans);

	return 0;
}
