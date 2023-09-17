/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX2_Calculate average using array
 ==========================================================================
*/

#include <stdio.h>
void main ()
{
	int Inputs ,i;
	float A[20],Avg,Sum=0;
	printf ("Please Enter The Numbers of Data: ");
	fflush (stdout);
	scanf("%d",&Inputs);
	for (i = 1 ; i<=Inputs ;i++)
	{
		printf ("%d Enter Number: ",i);
		fflush (stdout);
		scanf ("%f",&A[i]);
		fflush (stdin);
		Sum +=A[i];
	}
	Avg = Sum/Inputs;
	printf ("Average= %f",Avg);
	fflush (stdout);
}
