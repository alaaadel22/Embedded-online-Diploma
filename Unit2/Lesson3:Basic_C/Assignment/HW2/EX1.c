/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX1: Write a C program to check whether a number is even or odd
 *
 * HW2
 */

#include <stdio.h>

int main ()
{
	int number;
	printf ("Enter an integer you want to check: ");
	fflush (stdout);
	scanf ("%d",&number);
	if (number % 2 == 0)
	{
		printf ("The number is even");
	}
	else
	{
		printf ("The number is odd");
	}
	return 0;
}

