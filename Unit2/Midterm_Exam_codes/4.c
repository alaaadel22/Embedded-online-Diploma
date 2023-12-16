#include <stdio.h>
#include <string.h>

int reverse_digits(int num);

int main ()
{
	int num, h;
	printf ("Enter a number: ");
	scanf("%d",&num);
    fflush(stdin); fflush(stdout);
	h = reverse_digits (num);
	printf ("%d",h);
	return 0;
}

int reverse_digits(int num)
{
	int reversed = 0;
	while (num > 0)
	{
		int digit = num % 10;
		reversed = reversed * 10+ digit;
		num /= 10;
	}
	return reversed;
}
