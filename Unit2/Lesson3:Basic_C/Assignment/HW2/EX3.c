/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX3: Write a C program to find the largest number
 *
 * HW2
 */

#include <stdio.h>

int main ()
{
	float num1,num2,num3;
	printf ("Enter three numbers: ");
	fflush (stdout);
	scanf ("%f",&num1);
	fflush (stdin);
	scanf ("%f",&num2);
	fflush (stdin);
	scanf ("%f",&num3);
	fflush (stdin);
	if (num1 > num2 )
	{
		if (num1 > num3)
		{
			printf ("Largest number is: %f",num1);
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			printf ("Largest number is: %f",num2);
		}
	}
	else
	{
		printf ("Largest number is: %f",num3);
	}
	return 0;
}
