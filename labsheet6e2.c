//IT18206906

#include<stdio.h>

int main()
{
	int N = 1;

	printf("N\t10*N\t100*N\t1000*N\n");
	
	while(N <= 10)
	{
	printf("%d\t" , N);
	printf("%d\t" , 10 * N);
	printf("%d\t" , 100 * N);
	printf("%d\n" , 1000 * N);
	N++;	
	}

	return 0;
}
