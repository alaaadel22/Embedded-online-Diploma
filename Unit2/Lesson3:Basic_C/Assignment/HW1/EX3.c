/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX3: Write C Program to Add Two Integers
 */

#include <stdio.h>

int main ()
{
	int y,x;
	printf ("Enter two integers: ");
	fflush (stdout);
	scanf ("%d",&y);
	fflush(stdin);
	scanf ("%d",&x);
  fflush(stdin);
	printf ("Sum = %d",x + y);
	return 0;
}
