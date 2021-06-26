//IT18206906

#include<stdio.h>
int sum(int n);

int main()
{
	int num, ans;

	printf("Number:");
	scanf("%d", &num);

	ans = sum(num);

	printf("Answer = %d\n", ans);

	return 0;
}

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return (n + sum(n-1));
}
	
