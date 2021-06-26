//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	char name[100];
	int id;
	float average;

	FILE *cfPtr;
	cfPtr = fopen("marks.dat","r");
	
	if(cfPtr == NULL)
		printf("Cannot find file\n");
	else
	{
		fscanf(cfPtr, "%s%d%f", name, &id, &average);
		
		while(!feof(cfPtr))
		{
			printf("%s\n%d\n%.2f\n", name, id, average);
			fscanf(cfPtr, "%s%d%f", name, &id, &average);
		}
	}
	fclose(cfPtr);
	return 0;
}	

