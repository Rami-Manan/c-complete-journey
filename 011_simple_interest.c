#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    float rate, time, principal, simple_interest;   /* Declare all required float variables
                                                       rate     = rate of interest (in %)
                                                       time     = time period (in years)
                                                       principal= initial amount invested
                                                       simple_interest = calculated result  */

    printf("Enter a value for principal : ");    /* Prompt user to enter principal amount. */
    scanf("%f", &principal);                     /* Read and store float input in principal */

    printf("Enter a value for rate : ");         /* Prompt user to enter rate of interest */
    scanf("%f", &rate);                          /* Read and store float input in rate */

    printf("Enter a value for time : ");         /* Prompt user to enter time period */
    scanf("%f", &time);                          /* Read and store float input in time */

    simple_interest = (principal * rate * time) / 100;   /* Apply SI formula :
                                                             SI = (P * R * T) / 100 */

    printf("Simple Interest = %.2f\n", simple_interest);   /* Print result upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
