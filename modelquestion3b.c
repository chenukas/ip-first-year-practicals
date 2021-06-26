//IT18206906

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char phoneNo[10];
	float localCall, internationalCall, roaming, total = 0, dueAmount = 0;

	FILE *fPtr;
	fPtr = fopen("charges.dat","r");
	
	if(fPtr == NULL)
	{
		printf("File can not find.\n");
		return -1;
	}
	
	else
	{
		fscanf(fPtr,"%s%f%f%f", phoneNo, &localCall, &internationalCall, &roaming);

		printf("Phone No\tTotal Call Charges\tTotal Due Amount\n");

		while(!feof(fPtr))
		{
			total = localCall + internationalCall + roaming;
			dueAmount = total;				
			
			printf("%s\t\t%.2f\t\t%.2f\n", phoneNo, total, dueAmount);
			fscanf(fPtr,"%s%f%f%f", phoneNo, &localCall, &internationalCall, &roaming);
		}
		
	}
	fclose(fPtr);

	return 0;
}	
