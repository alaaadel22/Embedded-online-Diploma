#include <stdio.h>
#include <string.h>
void Reverse (char A[50] ,char B[50]);

int main ()
{
	char A[50], B[50];
	printf ("Enter the words: ");
	gets (A); gets(B);
	fflush(stdin); fflush(stdout);
	Reverse (A,B);
	printf ("%s %s",A,B);
	return 0;
}

void Reverse (char A[50] ,char B[50])
{
	int len, temp;
	len = strlen(A)>strlen(B)? strlen(A): strlen(B);
	for (int i=0;i<len;i++)
	{
		temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}
