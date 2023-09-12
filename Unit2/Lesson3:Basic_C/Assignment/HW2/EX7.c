/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX7: Write a C program to find factorial of number
 *
 * HW2
 */

 #include <stdio.h>

int main ()
{
    int num,factorial=1;
	printf ("Enter the number");
	fflush (stdout);
	scanf("%d",&num);
	fflush (stdin);
	if (num < 0)
	{
		printf ("Error");
	}
	for (int i=1;i<num;i++)
	{
		factorial *=(i+1) ;
	}
	printf ("factorial = %d", factorial);
}
