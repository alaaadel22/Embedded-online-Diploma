/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX3_Reverse the string
 ==========================================================================
*/
#include<stdio.h>
#include <string.h>

int main()
{
   char A[50];
   int i;
   printf ("Enter The String: ");
   fflush(stdin);fflush(stdout);
   gets   (A);
   printf ("Reverse string: ");
   fflush (stdout);
   for (int i = strlen(A);i>=0;i--)
   {
	   printf ("%c",A[i]);
	   fflush (stdout);
   }
   return 0;
}

