/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX6: Write Source Code to Swap Two Numbers
 */

#include <stdio.h>

int main ()
{
	float x,y,temp;
	printf ("Enter Value of a: ");
	fflush (stdout);
	scanf ("%f",&x);
	fflush(stdin);
	printf ("Enter Value of b: ");
  fflush (stdout);
	scanf ("%f",&y);
	fflush(stdin);
	temp = x;
	x = y;
	y = temp;
	printf ("After swapping, value of a = %.2f\n",x);
	fflush (stdout);
	printf ("After swapping, value of b = %.2f",y);
	return 0;
}
