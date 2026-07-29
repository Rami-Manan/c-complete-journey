#include <stdio.h>   /* Standard I/O library for printf() and scanf() */
int main()           /* Main function - program starts here */
{
    float radius, area;   /* radius = radius of circle, area = calculated area */

    printf("Enter the Radius of Circle : ");   /* Prompt user to enter radius */
    scanf("%f", &radius);                      /* Read and store float input in radius. */

    area = PI * radius * radius;   /* Apply circle area formula : Area = π * r * r */

    printf("Area of Circle = %.2f\n", area);   /* Print area upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
