/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX5: Write a C program to check whether a character ia an alphbet or not 
 *
 * HW2
 */

#include <stdio.h>
#include <ctype.h>
int main ()
{
	char ch;
	printf ("Enter the alphabet: ");
	fflush (stdout);
	scanf ("%c",&ch);
	fflush (stdin);
	if (!isalpha(ch))
	{
		printf ("%c is not an alphabet");
	}
	else
	{
		printf ("%c is an alphabet");
	}
	return 0;
}

