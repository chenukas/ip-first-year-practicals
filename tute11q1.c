//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	char word[50];
	int length, i;
	
	printf("Enter a word:");
	scanf("%s", word);

	length = strlen(word);

	for (i = 0; i < length / 2; i++)
	{
		if (word[i] != word[length - i -1])
		{
			printf("Word is not a Palindrom\n");
			return -1;
		}
	}

	printf("Word is a Palindrom\n");

	return 0;
}
	
