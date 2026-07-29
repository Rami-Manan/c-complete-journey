#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts executing here. */
{
    int a;           /* Variable to store the user's input number */

    printf("Enter a number : ");   /* Prompt user to enter a number */
    scanf("%d", &a);               /* Read integer input and store in a */

    if (a % 2 == 0)   /* Check if remainder is 0 when divided by 2 */
    {
        printf("Even\n");   /* Number is divisible by 2 = Even */
    }
    else              /* If remainder is not 0 */
    {
        printf("Odd\n");    /* Number is not divisible by 2 = Odd */
    }

    printf("End of the program\n");   /* \n added for clean output */

    return 0;   /* Return 0 = program ran successfully */
}
