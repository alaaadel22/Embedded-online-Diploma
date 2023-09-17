/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX1_Find the Frequency of Characters in a string
 ==========================================================================
*/
#include <stdio.h>

int main ()
{
	char A[50],Char;
	int counter = 0;
	printf ("Enter a String: ");
	fflush (stdout);
	gets(A);
	printf ("Enter a character to find frequency: ");
	fflush (stdout);
	scanf  ("%c",&Char);
	fflush (stdin);
	for (int i = 0; i <50 && A[i] != '\0';i++)
	{
		if (A[i]==Char)
		{
			counter++;
		}
	}
	printf ("Frequency of %c = %d",Char,counter);
	fflush (stdout);
	return 0;
}
