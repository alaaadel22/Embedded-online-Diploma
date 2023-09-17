/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX2_Find Length of string
 ==========================================================================
*/
#include <stdio.h>

int main ()
{
	char A[50];
	int counter = 0;
	printf ("Enter a String: ");
	fflush (stdout);
	gets   (A);

	for (int i = 0;i<50 && A[i]!='\0';i++)
	{
		counter ++;
	}
	printf ("Length of string = %d",counter);
	fflush (stdout);
	return 0;
}
