/*Definition:
A function is a block of code that performs a specific task, has a name, and can be called (used) multiple times from anywhere in the program.*/

#include <stdio.h>

/* Function declarations */
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

/* Add two numbers and return result */
float add(float a, float b)
{
    return a + b;
}

/* Subtract b from a and return result */
float subtract(float a, float b)
{
    return a - b;
}

/* Multiply two numbers and return result */
float multiply(float a, float b)
{
    return a * b;
}

/* Divide a by b and return result */
float divide(float a, float b)
{
    if(b == 0)   /* Check division by zero */
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main()
{
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1.Add  2.Subtract  3.Multiply  4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)      printf("Result: %.2f\n", add(a, b));
    else if(choice == 2) printf("Result: %.2f\n", subtract(a, b));
    else if(choice == 3) printf("Result: %.2f\n", multiply(a, b));
    else if(choice == 4) printf("Result: %.2f\n", divide(a, b));
    else                 printf("Invalid choice!\n");

    return 0;
}
