//IT18206906

#include<stdio.h>
#define SIZE 10

int main()
{
	int i,j;
	int style[SIZE] = {19,3,15,7,11,9,13,5,17,1};

	printf("Element\tValue\tHistogram\n");
	
	for(i = 0;i < SIZE; ++i)
	{
		printf("%d\t%d\t",i,style[i]);

		for(j = 1;j <= style[i]; ++j)
		{
			printf("*");
		}
	printf("\n");	

	}
	return 0;
}
