#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    float a, b, c;   /* a = base, b = height, c = area of triangle */

    printf("Enter the Base of Triangle   : ");   /* Prompt user to enter base */
    scanf("%f", &a);                             /* Read and store float input in a */

    printf("Enter the Height of Triangle : ");   /* Prompt user to enter height. */
    scanf("%f", &b);                             /* Read and store float input in b */

    c = 0.5 * a * b;   /* Apply triangle area formula : Area = 1/2 * base * height */

    printf("Area of Triangle = %.2f\n", c);   /* Print area upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
