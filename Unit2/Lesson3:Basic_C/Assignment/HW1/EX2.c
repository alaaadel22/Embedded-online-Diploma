/* 
* Name: Alaa Adel Kamal
*
* Unit 2 lesson 3 (Basic C & loops)
* 
* EX1: Write C program to print a Integer Entered by a User
*/

#include <stdio.h>

int main ()
{
     int y;
     printf ("Enter an integer: ");
     fflush (stdout);
     scanf ("%d",y)
     fflush (stdin);
     printf ("you entered: %d",y);
     return 0;
}
