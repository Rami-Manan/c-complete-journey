/*
 * Definition:
    Recursion is when a function calls itself to solve a smaller version of the same problem, until it reaches a base case (stopping condition).
 */

/*syntax 
void recursiveFunction()
{
    if(base_condition)   /* Base case - MUST exist to stop infinite loop. */
      //  return;

    /*recursiveFunction();   //Function calls itself 
}
*/


#include <stdio.h>

/* Recursively compute n! */
long long factorial(int n)
{
    if(n == 0 || n == 1)   /* Base case */
        return 1;
    return n * factorial(n - 1);   /* Recursive call */
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld\n", n, factorial(n));
    return 0;
}
