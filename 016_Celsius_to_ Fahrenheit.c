#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    float Celsius, Fahrenheit;   /* Celsius = user input, Fahrenheit = result */

    printf("Enter a value of Celsius : ");   /* Prompt user to enter Celsius value */
    scanf("%f", &Celsius);                   /* Read and store float input in Celsius. */

    Fahrenheit = (Celsius * 9 / 5) + 32;    /* Apply conversion formula :
                                               Fahrenheit = (Celsius * 9 / 5) + 32 */

    printf("The value of Fahrenheit = %.2f\n", Fahrenheit);   /* Print result upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
