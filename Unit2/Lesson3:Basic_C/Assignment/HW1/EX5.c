/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX5: Write C Program to Find ASCII Value of a Character
 */

#include <stdio.h>

int main ()
{
	char x;
	printf ("Enter two character: ");
	fflush (stdout);
	scanf ("%c",&x);
	fflush(stdin);
	printf ("ASCII value of %c = %d",x,x);
	return 0;
}
