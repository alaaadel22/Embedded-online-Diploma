/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX5_Search an element in array
 ==========================================================================
*/
#include <stdio.h>
int main ()
{
	int No_of_Elements,Searched, A[10];
	printf ("Enter The Number of Elements: ");
	fflush (stdin);fflush(stdout);
	scanf  ("%d",&No_of_Elements);
	for (int i=0;i<No_of_Elements;i++)
	{
		A[i]= rand()%100;
	}
	for (int i=0;i<No_of_Elements;i++)
	{
		printf ("%d ",A[i]);
		fflush (stdout);
	}
	printf ("\nEnter The element to be searched: ");
	fflush (stdout);
	scanf  ("%d",&Searched);
	fflush (stdin);
	for (int i = 0; i<No_of_Elements;i++)
	{
		if (A[i]==Searched)
		{
			printf ("Number Found At The Location: %d",i+1);
			fflush (stdout);
		}
	}
    return 0;
}
