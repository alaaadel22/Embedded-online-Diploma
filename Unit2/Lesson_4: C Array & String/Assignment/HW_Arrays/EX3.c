/*
 ============================================================================
 Name        : Alaa Adel Kamal
 Lesson      : Lesson 4 C Arrays and strings
 Description : EX3_Find the transpose of matrix
 ==========================================================================
*/
#include <stdio.h>
int main ()
{
	int A[20][20],T[20][20],Rows,Column;
	printf ("Enter Rows & Column of your matrix: ");
	fflush (stdout);
	scanf("%d %d",&Rows,&Column);
	fflush (stdin);
	printf ("Enter Elements of matrix:\n");
	for (int R = 0; R<Rows ; R++)
	{
		for (int C=0; C<Column ; C++)
		{
			printf ("Enter Element A%d%d ",R,C);
			fflush(stdout);
			scanf ("%d",&A[R][C]);
			fflush (stdin);
		}
	}
	printf ("Entered Matrix:\n");
	fflush (stdout);
	for (int R = 0; R<Rows ; R++)
	{
		for (int C=0; C<Column ; C++)
		{
			printf ("%d\t",A[R][C]);
			fflush(stdout);
		}
		printf("\n");
	}
	for (int R = 0; R<Column ; R++)
	{
		for (int C=0; C<Rows ; C++)
		{
			T[R][C]=A[C][R];
		}
	}
	printf ("Transpose of Matrix:\n");
	fflush (stdout);
	for (int R = 0; R<Column ; R++)
	{
		for (int C=0; C<Rows ; C++)
		{
			printf ("%d\t",T[R][C]);
			fflush(stdout);
		}
		printf("\n");
	}
	return 0;
}
