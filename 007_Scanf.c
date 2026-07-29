#include<stdio.h>      /* Standard I/O library for printf() and scanf() */
int main()             /* Main function - program starts here */
{
  int a, b;            /* Declare two integer variables to store user input. */
  
printf("Enter a Number for A =");   /* Prompt user to enter value for A */
scanf("%d", &a);                    /* Read integer input and store in a (&a = address of a) */ 
  
printf("Enter a Number for B =");   /* Prompt user to enter value for B */
scanf("%d", &b);                    /* Read integer input and store in b (&b = address of b) */


printf("You entered A = %d, B = %d", a, b); /* Display both values entered by user */
return 0;                                   /* Return 0 = program executed successfully */
}
