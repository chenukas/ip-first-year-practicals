//IT18206906

#include<stdio.h>

int main()
{
	int value[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
	int search;
	int c;

	printf("Enter a number to search:");
	scanf("%d", &search);

	for (c = 0;c < 10; c++)
	{
		if (value[c] == search)
		{
			printf("Location - %d\n", c + 1);
			break;
		}
	}
	
	if (c == 10)
		printf("Value not found.\n");
	
	return 0;
}

