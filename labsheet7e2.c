//IT18206906

#include<stdio.h>
#include<math.h>

int main()
{
	int term;
	int no = 3;
	int sign = -1;
	double pi = 4;

	for (term = 1; term <= 400000; term++)
	{
		printf("term is %d and value is %lf\n" , term , pi);
		pi = pi + 4.0 / no * sign ;
		no = no + 2;
		sign =- sign;

		if (fabs(pi - 3.141) < 0.0001)
		{
			printf("term is %d and value is %lf\n" , term , pi);
		}
	}
	return 0;
}
