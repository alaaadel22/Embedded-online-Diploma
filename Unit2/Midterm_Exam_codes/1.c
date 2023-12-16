#include <stdio.h>

int sum_d (int num);
int main ()
{
	int n,sum;
	printf ("Enter a number ");
	scanf ("%d",&n);
	fflush (stdin); fflush (stdout);
	sum = sum_d(n);
	printf ("The sum of the digits of %d is %d \n",n,sum);
}

int sum_d (int num)
{
	int sum = 0;
	while (num > 0)
	{
		int digit = num % 10;
		sum += digit;
		num/=10;
	}
	return sum;
}

