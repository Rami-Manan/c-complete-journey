/* Definition:
Dynamic Memory Management means allocating memory at runtime (while program is running)
 instead of at compile time. This is done using functions from <stdlib.h>. */

/* malloc */
// int *arr = (int *)malloc(n * sizeof(int));

/* calloc */
// int *arr = (int *)calloc(n, sizeof(int));

/* realloc */
 // arr = (int *)realloc(arr, newSize * sizeof(int));

/* free — always do this after use! */
 // free(arr);

/*Rules
1. Always check if returned pointer is NULL (allocation failure)
2. Always free() memory after use → prevents memory leak
3. Never access memory after free() → dangling pointer
4. realloc() preserves existing data up to old size. */


#include <stdio.h>
#include <stdlib.h>

int *stack;    /* Dynamic stack array */
int top = -1;  /* top = -1 means stack is empty */
int capacity;  /* Max size of stack */

/* Push element onto stack */
void push(int val)
{
    if(top == capacity - 1)   /* Stack overflow check */
    {
        printf("Stack is full!\n");
        return;
    }
    stack[++top] = val;   /* Increment top first, then insert */
    printf("Pushed: %d\n", val);
}

/* Pop element from stack */
int pop()
{
    if(top == -1)   /* Stack underflow check */
    {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top--];   /* Return top value, then decrement */
}

/* Display stack */
void display()
{
    if(top == -1) { printf("Stack empty\n"); return; }
    int i;
    printf("Stack (top to bottom): ");
    for(i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main()
{
    printf("Enter stack capacity: ");
    scanf("%d", &capacity);

    stack = (int *)malloc(capacity * sizeof(int));   /* Allocate stack memory */

    if(stack == NULL) { printf("Allocation failed!\n"); return 1; }

    push(10); push(20); push(30);
    display();
    printf("Popped: %d\n", pop());
    display();

    free(stack);   /* Free memory */
    return 0;
}
