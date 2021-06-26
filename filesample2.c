//IT18206906

#include<stdio.h>

int main()
{
	int n;

	FILE *cfPtr;
	cfPtr = fopen("data.txt","r");
	
	if(cfPtr == NULL)
		printf("Cannot find file\n");
	else
	{
		fscanf(cfPtr, "%d", &n);
		printf("%d\n", n);
	}

	fclose(cfPtr);
	return 0;
}
