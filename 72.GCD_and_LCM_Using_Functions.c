/*
GCD (Greatest Common Divisor): Also known as HCF (Highest Common Factor), it is the largest number that divides evenly into all given numbers- 
-without leaving a remainder.
LCM (Least Common Multiple): It is the smallest number that is a multiple of all the given numbers.
*/

#include <stdio.h>

/* Find GCD using Euclidean algorithm */
int findGCD(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;   /* Remainder becomes new b */
        a = temp;    /* Old b becomes new a */
    }
    return a;   /* When b = 0, a holds the GCD */
}

/* Find LCM using formula: LCM = (a * b) / GCD */
int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", findGCD(a, b));
    printf("LCM = %d\n", findLCM(a, b));

    return 0;
}
