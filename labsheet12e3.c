//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
        int i, class, year, givenYear;
        float gpa;
        char name[10];

        FILE *fPtr;
        fPtr = fopen("Student.dat","r");

        if(fPtr == NULL)
        {
                printf("Can not create file\n");
                return -1;
        }

	printf("Enter the year:");
	scanf("%d", &givenYear);

        fscanf(fPtr,"%s%d%d%f", name, &class, &year, &gpa);

	printf("Name\tGPA\n");
	
       	while(!feof(fPtr))
        {
		if(givenYear == year)
		{
			printf("%s\t%.1f\n", name, gpa);
		}
		fscanf(fPtr,"%s%d%d%f", name, &class, &year, &gpa);
        }
        fclose(fPtr);

        return 0;
}                                                                                                        



