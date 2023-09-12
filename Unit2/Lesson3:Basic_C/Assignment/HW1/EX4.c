/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX4: Write C Program to Multiply two Floating Point Numbers
 */

#include <stdio.h>

int main ()
{
	float y,x;
	printf ("Enter two Numbers: ");
	fflush (stdout);
	scanf ("%f",&y);
	fflush(stdin);
	scanf ("%f",&x);
        fflush(stdin);
	printf ("Sum = %f",x * y);
	return 0;
}

