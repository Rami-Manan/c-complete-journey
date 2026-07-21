/*
 * Program     : Recursion - All Concepts in One Program
 * Description : Covers all major recursion types:
 *               → Factorial (linear recursion)
 *               → Fibonacci (tree recursion)
 *               → Sum of digits
 *               → Reverse a number
 *               → Palindrome check
 *               → Tower of Hanoi (complex recursion)
 *               → Binary search (divide and conquer recursion)
 *               → Power calculation
 */

#include <stdio.h>
#include <string.h>

/* ── Factorial: n! = n * (n-1)! ── */
long long factorial(int n)
{
    if(n == 0 || n == 1) return 1;        /* Base case */
    return n * factorial(n - 1);          /* Recursive case */
}

/* ── Fibonacci: fib(n) = fib(n-1) + fib(n-2) ── */
int fibonacci(int n)
{
    if(n == 0) return 0;                  /* Base case 1 */
    if(n == 1) return 1;                  /* Base case 2 */
    return fibonacci(n-1) + fibonacci(n-2); /* Two recursive calls */
}

/* ── Sum of digits: 123 → 1+2+3 = 6 ── */
int sumDigits(int n)
{
    if(n == 0) return 0;                  /* Base case */
    return (n % 10) + sumDigits(n / 10); /* Last digit + recurse */
}

/* ── Reverse number: 1234 → 4321 ── */
int reverseNum(int n, int rev)
{
    if(n == 0) return rev;                         /* Base case */
    return reverseNum(n / 10, rev * 10 + n % 10); /* Build reversed number */
}

/* ── Palindrome string check ── */
int isPalindrome(char s[], int start, int end)
{
    if(start >= end) return 1;                     /* Base case: crossed */
    if(s[start] != s[end]) return 0;              /* Mismatch */
    return isPalindrome(s, start+1, end-1);        /* Check inner chars */
}

/* ── Power: base^exp ── */
long long power(int base, int exp)
{
    if(exp == 0) return 1;                         /* Base case: x^0 = 1 */
    return base * power(base, exp - 1);            /* Recursive case */
}

/* ── Tower of Hanoi ── */
void hanoi(int n, char src, char dest, char helper)
{
    if(n == 1)                                     /* Base case: 1 disk */
    {
        printf("   Move disk 1 from %c to %c\n", src, dest);
        return;
    }
    hanoi(n-1, src, helper, dest);                /* Move n-1 to helper */
    printf("   Move disk %d from %c to %c\n", n, src, dest);
    hanoi(n-1, helper, dest, src);                /* Move n-1 to dest */
}

/* ── Binary Search ── */
int binarySearch(int arr[], int low, int high, int target)
{
    if(low > high) return -1;                      /* Base case: not found */
    int mid = (low + high) / 2;
    if(arr[mid] == target) return mid;             /* Found */
    if(arr[mid] > target)
        return binarySearch(arr, low, mid-1, target);
    else
        return binarySearch(arr, mid+1, high, target);
}

int main()
{
    int i;

    printf("========== RECURSION - ALL CONCEPTS ==========\n\n");

    /* Factorial */
    printf("1. FACTORIAL\n");
    printf("   5! = %lld\n\n", factorial(5));

    /* Fibonacci */
    printf("2. FIBONACCI SERIES (first 8 terms)\n   ");
    for(i = 0; i < 8; i++)
        printf("%d ", fibonacci(i));
    printf("\n\n");

    /* Sum of digits */
    printf("3. SUM OF DIGITS\n");
    printf("   Sum of digits of 12345 = %d\n\n", sumDigits(12345));

    /* Reverse number */
    printf("4. REVERSE NUMBER\n");
    printf("   Reverse of 6789 = %d\n\n", reverseNum(6789, 0));

    /* Palindrome */
    printf("5. PALINDROME CHECK\n");
    char word[] = "madam";
    int len = strlen(word);
    printf("   \"%s\" is %spalindrome\n\n",
           word, isPalindrome(word, 0, len-1) ? "" : "NOT ");

    /* Power */
    printf("6. POWER CALCULATION\n");
    printf("   2^10 = %lld\n\n", power(2, 10));

    /* Tower of Hanoi */
    printf("7. TOWER OF HANOI (3 disks)\n");
    hanoi(3, 'A', 'C', 'B');
    printf("\n");

    /* Binary Search */
    printf("8. BINARY SEARCH\n");
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int idx = binarySearch(arr, 0, 6, 40);
    printf("   Searching 40 in array → Found at index %d\n", idx);

    return 0;
}
