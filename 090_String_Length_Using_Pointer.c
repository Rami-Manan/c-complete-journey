#include <stdio.h>

/* Count characters using pointer arithmetic. */
int strLenPtr(char *ptr)
{
    int count = 0;

    while(*ptr != '\0')   /* Dereference and check for null terminator */
    {
        count++;
        ptr++;            /* Move to next character */
    }

    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n", strLenPtr(str));

    return 0;
}
