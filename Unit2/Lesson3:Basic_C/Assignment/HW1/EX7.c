/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX7: Write Source Code to Swap Two Numbers without temp variable
 */

#include <stdio.h>

int main ()
{
	float x,y;
	printf ("Enter Value of a: ");
	fflush (stdout);
	scanf ("%f",&x);
	fflush(stdin);
	printf ("Enter Value of b: ");
  fflush (stdout);
	scanf ("%f",&y);
	fflush(stdin);
  x = x + y; //EX: if we entered x= 5 & y= 4 >> x=9
  y = x - y; // y = 9 - 4 = 5
  x = x - y; // x = 9 - 5 = 4
  printf ("After swapping, value of a = %.2f\n",x);
  fflush (stdout);
  printf ("After swapping, value of b = %.2f",y);
	return 0;
}
