#include <stdio.h>
#include <string.h>
int Power (int N1,int N2);

int main ()
{
	int N1,N2;
	printf ("Enter base Number: ");
	scanf ("%d",&N1);
	fflush(stdin);fflush(stdout);
	printf ("Enter the power of the Number: ");
	scanf ("%d",&N2);
	fflush(stdin);fflush(stdout);
	printf ("%d^%d = %d",N1,N2,Power (N1,N2));
    return 0;
}
int Power (int N1,int N2)
{
	while (N2!=1)
	{
		N2--;
		return N1*Power (N1,N2);
	}
}
