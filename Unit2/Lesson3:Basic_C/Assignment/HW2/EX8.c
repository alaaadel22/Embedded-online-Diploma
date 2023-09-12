/*
 * Name: Alaa Adel Kamal
 *
 * Unit 2 lesson 3 (Basic C & loops)
 *
 * EX7: Write a C program to make a simple calculator to add & subtract & multiply & divide
 *
 * HW2
 */

 #include <stdio.h>

int main ()
{
	float num1 , num2;
	char choice;
	printf ("Enter two numbers: ");
	fflush (stdout);
	scanf("%f",&num1);
	fflush (stdin);
	scanf("%f",&num2);
	fflush (stdin);
	printf ("Enter the operator either + , - , * , /");
	fflush (stdout);
	scanf("%c",&choice);
	fflush (stdin);
	switch (choice)
	{
	case '+':
		{
			printf ("the sum = %f",num1+num2);
		}
		break;
	case '-':
		{
			printf ("the sub = %f",num1-num2);
		}
		break;
	case '*':
		{
			printf ("the mul = %f",num1*num2);
		}
		break;
	case '/':
		{
			printf ("the dev = %f",num1/num2);
		}
		break;
	}
}
