#include <stdio.h>

int sum ();

int main ()
{
	printf ("sum = %d", sum());
	return 0;
}

int sum ()
{
	return (100 * (100 + 1)) / 2;
}
