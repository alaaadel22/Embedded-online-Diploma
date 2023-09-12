/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX2: Write a C program to check vowel or constant
 *
 * HW2
 */

#include <stdio.h>

int main ()
{
	char ch;
	int lowercase_vowel,uppercase_vowel;
	printf ("Enter the alphabet: ");
	fflush (stdout);
	scanf ("%c",&ch);
	fflush (stdin);
	lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
  uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	if (uppercase_vowel || lowercase_vowel )
	{
		printf ("Alphabet is vowel");
	}
	else
	{
		printf ("Alphabet is constant");
	}
	return 0;
}
