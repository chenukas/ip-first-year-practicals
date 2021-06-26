//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int id;
	float average;
	char name[100];

	printf("Name:");
	scanf("%s", name);
	printf("ID:");
	scanf("%d", &id);
	printf("Average:");
	scanf("%f", &average);

	FILE *cfPtr;
	cfPtr = fopen("marks.dat","w");

	if(cfPtr == NULL)
		printf("Cannot create file\n");
	else
	{
		fprintf(cfPtr, "%s\n%d\n%.2f\n", name, id, average);
	}
	fclose(cfPtr);

	return 0;
}
