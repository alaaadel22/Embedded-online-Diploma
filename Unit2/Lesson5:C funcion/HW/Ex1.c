/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 5 C Functions
 Description : EX1_Prime Numbers between two intervals
 ============================================================================*/

#include <stdio.h>

void primeNum (int N1,int N2);

int main ()
{
	printf ("Enter two numbers (intervals): ");
	int N1, N2;
	scanf ("%d %d",&N1,&N2);
	fflush(stdin);fflush(stdout);
	primeNum (N1,N2);
    return 0;
}
void primeNum (int N1,int N2)
{
	int flag ;
	printf ("Prime Numbers between %d and %d are:\n",N1,N2);
		for (int i=N1;i<=N2;i++)
		{
			if (i==1 || i==0)
			{
				continue;
			}
			flag = 1;
			for (int j = 2; j<=i/2;j++)
			{
				if (i%j==0)
			    {
					flag =0;
					break;
			    }
			}
			if (flag ==1)
			printf ("%d\t",i);
		}
}
