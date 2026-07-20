/*
 * Program     : Functions - All Concepts in One Program
 * Description : Covers all 4 types of functions in one program:
 *               Type 1 - With argument, With return value
 *               Type 2 - With argument, Without return value
 *               Type 3 - Without argument, With return value
 *               Type 4 - Without argument, Without return value
 *               Also covers: Function declaration, definition,
 *               calling, and function pointer
 */

#include <stdio.h>

/* ── Global variable used by Type 3 and Type 4 functions ── */
int globalNum = 100;

/* ── Function Declarations (Prototypes) ── */
int    square(int n);           /* Type 1 */
void   printDouble(int n);      /* Type 2 */
int    getGlobal();             /* Type 3 */
void   showGlobal();            /* Type 4 */
int    add(int a, int b);       /* For function pointer demo */
int    multiply(int a, int b);  /* For function pointer demo */

/* ══════════════════════════════════════════════
   TYPE 1 : With Argument, WITH Return Value
   → Takes input, processes it, returns result
   ══════════════════════════════════════════════ */
int square(int n)
{
    return n * n;   /* Returns square of n */
}

/* ══════════════════════════════════════════════
   TYPE 2 : With Argument, WITHOUT Return Value
   → Takes input, performs action, returns nothing
   ══════════════════════════════════════════════ */
void printDouble(int n)
{
    printf("Double of %d = %d\n", n, n * 2);
    /* No return statement — void function */
}

/* ══════════════════════════════════════════════
   TYPE 3 : WITHOUT Argument, WITH Return Value
   → No input needed, returns a value
   ══════════════════════════════════════════════ */
int getGlobal()
{
    return globalNum;   /* Returns global variable */
}

/* ══════════════════════════════════════════════
   TYPE 4 : WITHOUT Argument, WITHOUT Return Value
   → No input, no output — just does something
   ══════════════════════════════════════════════ */
void showGlobal()
{
    printf("Global value = %d\n", globalNum);
}

/* ── Helper functions for Function Pointer demo ── */
int add(int a, int b)      { return a + b; }
int multiply(int a, int b) { return a * b; }

int main()
{
    int num = 5;

    printf("========== FUNCTION TYPES ==========\n\n");

    /* Type 1: With arg, with return */
    printf("Type 1 (With arg, With return):\n");
    int result = square(num);
    printf("Square of %d = %d\n\n", num, result);

    /* Type 2: With arg, without return */
    printf("Type 2 (With arg, Without return):\n");
    printDouble(num);
    printf("\n");

    /* Type 3: Without arg, with return */
    printf("Type 3 (Without arg, With return):\n");
    int val = getGlobal();
    printf("Got global value = %d\n\n", val);

    /* Type 4: Without arg, without return */
    printf("Type 4 (Without arg, Without return):\n");
    showGlobal();
    printf("\n");

    /* ── Function Pointer ── */
    printf("========== FUNCTION POINTER ==========\n\n");

    /* Declare function pointer that takes 2 ints, returns int */
    int (*operation)(int, int);
    int choice, a, b;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("1.Add  2.Multiply : ");
    scanf("%d", &choice);

    /* Assign correct function to pointer */
    if(choice == 1) operation = add;
    else            operation = multiply;

    /* Call function via pointer */
    printf("Result = %d\n", operation(a, b));

    return 0;
}
