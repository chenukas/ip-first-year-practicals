//IT18206906

#include<stdio.h>

int main()
{
	int number = 10;

	FILE *cfPtr;
	cfPtr = fopen("data.txt","w");

	if(cfPtr == NULL)
		printf("Can not find\n");
	else
		fprintf(cfPtr, "%d", number);

	fclose(cfPtr);

	return 0;
}
