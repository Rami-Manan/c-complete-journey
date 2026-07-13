#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    float Celsius, Fahrenheit;   /* Celsius = result, Fahrenheit = user input */

    printf("Enter a number for Fahrenheit : ");   /* Prompt user to enter Fahrenheit value */
    scanf("%f", &Fahrenheit);                     /* Read and store float input in Fahrenheit */

    Celsius = (Fahrenheit - 32) * 5 / 9;         /* Apply conversion formula :
                                                     Celsius = (Fahrenheit - 32) * 5 / 9 */

    printf("Celsius = %.2f\n", Celsius);          /* Print Celsius result upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
