#include <stdio.h>

int count1 (unsigned int num);

int main ()
{
	int num, h;
	printf ("Enter a number: ");
	scanf("%d",&num);
	fflush(stdin); fflush(stdout);
	h = count1 (num);
	printf ("%d",h);
	return 0;
}

int count1 (unsigned int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1)
		{
			count++;
		}
		num >>= 1;
	}
	return count;
}
