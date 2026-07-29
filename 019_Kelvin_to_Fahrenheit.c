#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    float kelvin, fahrenheit;   /* Declare variables to store temperatures. */

    /* Ask user to enter temperature in Kelvin */
    printf("Enter the temperature in Kelvin: ");

    /* Read the Kelvin value entered by user */
    scanf("%f", &kelvin);

    /* Convert Kelvin to Fahrenheit using formula: F = ((9/5) * (K - 273.15)) + 32 */
    fahrenheit = ((9.0 / 5) * (kelvin - 273.15)) + 32;

    /* Display the result rounded to 2 decimal places */
    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;   /* Return 0 = program executed successfully */
}
