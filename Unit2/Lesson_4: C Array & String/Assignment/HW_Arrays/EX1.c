/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX1_find sum of two matrixes 2*2
 ==========================================================================
 */

#include <stdio.h>
int main() {
	float A[2][2],B[2][2],sum[2][2];
	printf ("Please enter the first array\n");
	fflush(stdout);
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 2;j++)
		{
			printf ("Enter A%d%d ",i,j);
			fflush(stdout);
			scanf("%f",&A[i][j]);
			fflush(stdin);
		}
	}
	printf ("Please enter the Second array\n");
	fflush(stdout);
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 2;j++)
		{
			printf ("Enter B%d%d ",i,j);
			fflush(stdout);
			scanf("%f",&B[i][j]);
			fflush(stdin);
		}
	}
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 2;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("Sum of matrix:\n");
	fflush(stdout);
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 2;j++)
		{
			printf("%f\t",sum[i][j]);
			fflush(stdout);
		}
		printf ("\n");
		fflush(stdout);
	}
	return 0;
}
