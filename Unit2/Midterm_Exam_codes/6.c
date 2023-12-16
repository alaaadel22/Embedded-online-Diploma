#include <stdio.h>
void Uni (int a[], int size);

int main ()
{
	int A[15],s;
	printf ("Enter the size of the array ");
	scanf ("%d", &s);
	fflush(stdin); fflush(stdout);
	printf ("Enter the elements of the array: \n");
	for (int i=0;i<s;i++) 
	{
		scanf ("%d",&A[i]);
		fflush(stdin); fflush(stdout);
	}
	Uni (A,s);
	return 0;
}

void Uni (int a[], int size)
{
	int unique = 0;
	for (int i = 0; i < size; i++)
	{
		unique ^= a[i];
	}
	if (unique != 0)
		printf("The unique element in the array is: %d\n", unique);
	else
		printf("No unique element found in the array.\n");
}	

