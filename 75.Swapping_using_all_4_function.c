/*
There are two types of functions 
1. pre-defined function:- which are already present in the C language library 
2. User-defined function:- a function made by users to do a specific task
* 4 Types of user-defined  Functions:
 *   1. With argument, with return value
 *   2. With argument, without return value
 *   3. Without argument, with return value
 *   4. Without argument, without return value
 */

#include <stdio.h>

int a, b;   /* Global variables used by types 3 and 4 */

/* ---- Type 1: With argument, WITH return value ---- */
int swapAndReturn(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("[Type 1] After swap: x = %d, y = %d\n", x, y);
    return x;   /* Returns swapped x */
}

/* ---- Type 2: With argument, WITHOUT return value ---- */
void swapNoReturn(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("[Type 2] After swap: x = %d, y = %d\n", x, y);
    /* No return statement */
}

/* ---- Type 3: WITHOUT argument, WITH return value ---- */
int swapGlobalReturn()
{
    int temp = a;
    a = b;
    b = temp;
    printf("[Type 3] After swap: a = %d, b = %d\n", a, b);
    return a;   /* Returns swapped global a */
}

/* ---- Type 4: WITHOUT argument, WITHOUT return value ---- */
void swapGlobalNoReturn()
{
    int temp = a;
    a = b;
    b = temp;
    printf("[Type 4] After swap: a = %d, b = %d\n", a, b);
}

int main()
{
    /* Type 1 */
    printf("-- Type 1: With arg, With return --\n");
    swapAndReturn(10, 20);

    /* Type 2 */
    printf("-- Type 2: With arg, Without return --\n");
    swapNoReturn(30, 40);

    /* Type 3 */
    a = 50; b = 60;
    printf("-- Type 3: Without arg, With return --\n");
    swapGlobalReturn();

    /* Type 4 */
    a = 70; b = 80;
    printf("-- Type 4: Without arg, Without return --\n");
    swapGlobalNoReturn();

    return 0;
}
