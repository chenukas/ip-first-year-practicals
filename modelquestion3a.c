//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char phoneNo[10];
	float localCall, internationalCall, roaming, total = 0;

	FILE *fPtr;
	fPtr = fopen("charges.dat","w");
	
	if(fPtr == NULL)
	{
		printf("File can not create.\n");
		return -1;
	}
	
	else
	{
		for(i = 0; i < 5; i++)
		{
			printf("\nPhone no:");
			scanf("%s", phoneNo);
			printf("Local call charges:");
			scanf("%f", &localCall);
			printf("International call charges:");
			scanf("%f", &internationalCall);
			printf("Roaming charges:");
			scanf("%f", &roaming);
			fprintf(fPtr,"%s\t\t%.2f\t\t%.2f\t\t%.2f\n", phoneNo, localCall, internationalCall, roaming);
		}
	}
	fclose(fPtr);

	return 0;
}	
