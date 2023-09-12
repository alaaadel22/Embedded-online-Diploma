/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX4: Write a C program to check whether the number is positive or negative
 *
 * HW2
 */

#include <stdio.h>

int main ()
{
	float num;
	printf ("Enter number: ");
	fflush (stdout);
	scanf ("%f",&num);
	fflush (stdin);
	if ( num < 0 )
	{
		printf ("%f is negative",num);
	}
	else if (num == 0)
	{
		printf ("%f is zero",num);
	}
	else
	{
		printf ("%f is positive",num);
	}
	return 0;
}
