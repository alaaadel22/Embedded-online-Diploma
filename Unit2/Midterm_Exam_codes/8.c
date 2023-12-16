#include <stdio.h>
#include <string.h>
void Reverse (char A[50]);

int main () 
{
	char A[50];
	printf ("Enter a numbers: ");
	gets (A);
	fflush(stdin); fflush(stdout);
	Reverse (A);
	printf ("%s", A);
	return 0;
}

void Reverse (char A[50])
{
	int temp, len;
	len = strlen(A);
	for (int i=0;i<len/2;i++)
	{
		temp = A[i];
		A[i]=A[len-i-1];
		A[len-i-1]=temp;
	}
}
