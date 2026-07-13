#include <stdio.h>   /* Standard library for printf() and scanf() */

int main()      /* Main function - program starts here */
{ 
    float celsius, kelvin;   /* Declare two float variables to store temperature values */
  
    printf("Enter temperature in Celsius: ");    /* Ask user to enter Celsius value */
    scanf("%f", &celsius);          /* Ask user to enter Celsius value */

    kelvin = celsius + 273.15;     /* Apply conversion formula */

    printf("Temperature in Kelvin: %.2f\n", kelvin);    /* Print result with 2 decimal places */

    return 0;    /* Program executed successfully */
}
