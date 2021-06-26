//IT18206906

#include<stdio.h>
#include<string.h>

struct vehicle{
	int vehicleNo;
	char driName[10];
	float distance;
	} vcl[5];
	
int main()
{
	int i;
	
	FILE *cfPtr;
	cfPtr = fopen("Hires.dat","w");
	
	if(cfPtr == NULL)
		printf("Cannot create file\n");
	else
	{
		for(i = 0; i < 5; ++i)
		{
			printf("Vehicle No:");
			scanf("%d", &vcl[i].vehicleNo);
			printf("Driver's Name:");
			scanf("%s", vcl[i].driName);
			printf("Distance:");
			scanf("%f", &vcl[i].distance);

			fprintf(cfPtr, "%d\n%s\n%f\n", vcl[i].vehicleNo, vcl[i].driName, vcl[i].distance);
		}
	}
	fclose(cfPtr);
	return 0;
}
