/*
 * Memory leak = allocated memory never freed.
 * OS reclaims it when program ends, but in long-running
 * programs (servers, games) this causes crashes
 * This program shows WRONG way and RIGHT way side by side
 */

#include <stdio.h>
#include <stdlib.h>

/* WRONG: Leaks memory — allocates but never frees */
void leakyFunction()
{
    int *ptr = (int *)malloc(10 * sizeof(int));
    /* ptr goes out of scope here — memory is LOST */
    /* No free() = memory leak */
    printf("Leaky function: allocated but NOT freed\n");
}

/* RIGHT: No leak — always frees before returning */
void safeFunction()
{
    int *ptr = (int *)malloc(10 * sizeof(int));

    if(ptr == NULL) { printf("Allocation failed!\n"); return; }

    /* Use the memory */
    int i;
    for(i = 0; i < 10; i++) ptr[i] = i * 10;

    printf("Safe function: values = ");
    for(i = 0; i < 10; i++) printf("%d ", ptr[i]);
    printf("\n");

    free(ptr);   /* Always free before function ends */
    ptr = NULL;  /* Set to NULL after free — prevents dangling pointer */
}

int main()
{
    leakyFunction();   /* Memory leak happens here */
    safeFunction();    /* No leak */

    printf("\nRule: Every malloc() must have a matching free()\n");

    return 0;
}
