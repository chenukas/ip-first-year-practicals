//IT18206906

#include<stdio.h>

int main()
{
	int c;
	int A[5] = {10, 20, 30, 40, 50};
	int B[5] = {34, 67, 12, 89, 12};
	int C[5] = {0};

	for (c = 0; c < 5; c++)
	{
		C[c] = A[c] * B[c];
		
		printf("C[%d]=%d\n", c, C[c]);
	}
	return 0;
}
