/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX6: Write a C program to calculate sum of natural numbers
 *
 * HW2
 */

 #include <stdio.h>

int main ()
{
	unsigned int num,sum = 0;
	printf ("Enter the number");
	fflush (stdout);
	scanf("%d",&num);
	fflush (stdin);
	if (num == 0)
	{
		printf ("sorry zero is not natural number");
	}
	for (int i=1;i<=num;i++)
	{
		sum += i;
	}
	printf ("Sum = %d", sum);
}
