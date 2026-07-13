#include <stdio.h>

/* Basic math functions */
float add(float a, float b)      { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b)
{
    if(b == 0) { printf("Cannot divide by zero!\n"); return 0; }
    return a / b;
}

int main()
{
    /* Declare a function pointer that takes 2 floats and returns float */
    float (*operation)(float, float);

    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1.Add  2.Subtract  3.Multiply  4.Divide\nChoice: ");
    scanf("%d", &choice);

    /* Assign the correct function to the pointer */
    if(choice == 1)      operation = add;
    else if(choice == 2) operation = subtract;
    else if(choice == 3) operation = multiply;
    else if(choice == 4) operation = divide;
    else { printf("Invalid!\n"); return 1; }

    /* Call the function via pointer */
    printf("Result: %.2f\n", operation(a, b));

    return 0;
}
