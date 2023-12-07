#include <stdio.h>
#include <string.h>
void Reverse (char Sentences[50]);

int main ()
{
	char Sentences[50];
	printf ("Enter a Sentance: ");
	gets(Sentences);
	fflush(stdin);fflush(stdout);
	Reverse (Sentences);
	printf ("%s",Sentences);
    return 0;
}
void Reverse (char Sentences[50])
{
	int temp,len;
	len = strlen(Sentences);
 	for (int i=0;i<len/2;i++)
	{
	    temp = Sentences[i];
		Sentences[i]=Sentences[len-i-1];
		Sentences[len-i-1]=temp;
	}
}
