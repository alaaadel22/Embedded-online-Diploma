#include <stdio.h>

int Factorial (int N1);

int main ()
{
	int N1;
	printf ("Enter Positive Number: ");
	scanf ("%d",&N1);
	fflush(stdin);fflush(stdout);
	printf ("Factorial of %d is %d",N1,Factorial (N1));
    return 0;
}
int Factorial (int N1)
{
	if (N1 == 0)
		printf("Error");
	if (N1 == 1)
		return 1;
	else 
		return N1*Factorial (N1-1);
}
