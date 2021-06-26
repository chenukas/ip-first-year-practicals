//IT18206906

#include<stdio.h>
#include<string.h>
void convertToUpperCase(char a[], int size);

int main()
{
	char address[100];
	strcpy(address, "SLIIT, New Kandy Road, Malabe");

	convertToUpperCase(address, strlen(address));
	
	printf("In upper case:\t%s\n", address);

	return 0;

}

void convertToUpperCase(char a[], int size)
{
	int c = 0;

	while (c != size)
	{
		if(a[c] >= 97 && a[c] <= 122)
		{
			a[c] = a[c] - 32;
		}
		c++;
	}
}
