#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    float Fahrenheit, Kelvin;   /* Declare float variables for temperature values. */

    /* Ask user to enter Fahrenheit value */
    printf("Enter a value of Fahrenheit: ");
    scanf("%f", &Fahrenheit);   /* Read float input and store in Fahrenheit */

    /* Convert Fahrenheit to Kelvin using the standard formula */
    Kelvin = 273.15 + ((Fahrenheit - 32.0) * (5.0 / 9.0));

    /* Display the result rounded to 2 decimal places */
    printf("The value of Kelvin = %.2f\n", Kelvin);

    return 0;   /* Return 0 = program executed successfully */
}
