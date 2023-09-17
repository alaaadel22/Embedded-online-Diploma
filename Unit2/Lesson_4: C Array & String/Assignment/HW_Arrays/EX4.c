/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX4_Insert an element in an array
 ==========================================================================
*/
#include <stdio.h>
int main ()
{
	int A[10],No_of_Elements,Element_inserted,location;
	printf ("Enter no of elements: ");
	fflush (stdout);
	scanf  ("%d",&No_of_Elements);
	fflush (stdin);
	for (int i = 1; i<=No_of_Elements ; i++)
	{
		A[i]=i;
		printf ("%d ",A[i]);
		fflush (stdout);
	}
	printf ("\nEnter The element to be inserted: ");
	fflush (stdout);
	scanf  ("%d",&Element_inserted);
	fflush (stdin);
	No_of_Elements++;
	printf ("Enter The Location: ");
	fflush (stdout);
	scanf  ("%d",&location);
	fflush (stdin);
	for (int i = No_of_Elements ; i>=location ; i--)
	{
		A[i]=A[i-1];
	}
	A[location]=Element_inserted;
	for (int i = 1 ; i<=No_of_Elements ;i++)
	{
		printf ("%d ",A[i]);
		fflush (stdout);
	}
  return 0;
}
