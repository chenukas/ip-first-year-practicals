//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int i, class, year;
	float gpa;
	char name[10];

	FILE *fPtr;
	fPtr = fopen("Student.dat","w");

	if(fPtr == NULL)
	{
		printf("Can not create file\n");
		return -1;
	}
	else
	{
		for(i = 0; i < 5; i++)
		{
			printf("Enter details of student %d:\n", i+1);
			printf("Name:");
			scanf("%s", name);
			printf("Class:");
			scanf("%d", &class);
			printf("Year:");
			scanf("%d", &year);
			printf("GPA:");
			scanf("%f", &gpa);
			fprintf(fPtr, "%s\t\t%d\t\t%d\t\t%.1f\n", name, class, year, gpa);
		}
	}
	fclose(fPtr);

	return 0;
}
