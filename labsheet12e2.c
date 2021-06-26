//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int i, class, year;
	float gpa;
	char name[10];

	FILE *fPtr;
	fPtr = fopen("Student.dat","r");

	if(fPtr == NULL)
	{
		printf("Can not create file\n");
		return -1;
	}
	else
	{
		printf("Name\t\tClass\t\tYear\t\tGPA\n");
		
		fscanf(fPtr,"%s%d%d%f", name, &class, &year, &gpa);

		while(!feof(fPtr))
		{
			printf("%s\t\t%d\t\t%d\t\t%.1f\n", name, class, year, gpa);
			fscanf(fPtr,"%s%d%d%f", name, &class, &year, &gpa);
		}
	}
	fclose(fPtr);

	return 0;
}
