//IT18206906

#include<stdio.h>

int main()
{
	char ch;

	printf("Enter the first letter of the color:\n");
	scanf("%c" , &ch);

	if(ch == 'o' || ch == 'O')
		printf("ammonia\n");
	else if(ch == 'b' || ch == 'B')
		printf("carbon monoxide\n");
	else if(ch == 'y' || ch == 'Y')
		printf("hydrogen\n");
	else if(ch == 'g' || ch == 'G')
		printf("oxygen\n");

	printf("Glad to be of service\n");
	
	return 0;
}
