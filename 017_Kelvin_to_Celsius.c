#include <stdio.h>   /* Standard library for printf() and scanf() */
int main()           /* Main function - program starts here */
{
    float Kelvin, Celsius;   /* Declare two float variables to store temperature values. */

    printf("Enter Value of Kelvin : ");   /* Ask user to enter Kelvin value */
    scanf("%f", &Kelvin);                 /* Read the Kelvin value entered by user */

    Celsius = Kelvin - 273.15;            /* Apply conversion formula */

    printf("Celsius = %.2f\n", Celsius);  /* Print result with 2 decimal places */

    return 0;   /* Program executed successfully */
}
