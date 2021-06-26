//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	char word[100];
	int i, length;

	printf("Enter a word:");
	scanf("%20s", word);

	length = strlen(word);

	for (i = length-1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
	puts("");

	return 0;
}
