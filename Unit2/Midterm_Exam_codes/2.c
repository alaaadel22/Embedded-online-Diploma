#include <stdio.h>
#include <math.h>

float sq_n (float num);

int main ()
{
	float n;
	printf ("Enter a number ");
	scanf ("%f",&n);
	fflush (stdin); fflush (stdout);
	printf ("The square root of %.3f is %.3f \n" ,n,sq_n (n));
}

float sq_n (float num)
{
	float s = sqrt(num);
	return s;
}
