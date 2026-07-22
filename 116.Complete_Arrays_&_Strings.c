/*
 * Program    : Arrays & Strings - All Concepts in One Program
 * Description: Covers all major array and string concepts:
 *               Arrays → largest, smallest, second largest,
 *                        reverse, sort (bubble sort), search
 *               Strings → custom strlen, strcpy, strcat,
 *                         reverse, palindrome, vowel count,
 *                         uppercase/lowercase conversion
 */

#include <stdio.h>
#include <string.h>

/* ════════════════ ARRAY FUNCTIONS ════════════════ */

/* Find largest element */
int findLargest(int arr[], int n)
{
    int i, max = arr[0];
    for(i = 1; i < n; i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

/* Find smallest element */
int findSmallest(int arr[], int n)
{
    int i, min = arr[0];
    for(i = 1; i < n; i++)
        if(arr[i] < min) min = arr[i];
    return min;
}

/* Find second largest */
int secondLargest(int arr[], int n)
{
    int i, first = arr[0], second = -999999;
    for(i = 1; i < n; i++)
    {
        if(arr[i] > first) { second = first; first = arr[i]; }
        else if(arr[i] > second && arr[i] != first) second = arr[i];
    }
    return second;
}

/* Bubble sort ascending */
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
        for(j = 0; j < n-1-i; j++)
            if(arr[j] > arr[j+1])
            {
                temp=arr[j]; arr[j]=arr[j+1]; arr[j+1]=temp;
            }
}

/* Reverse array in place */
void reverseArray(int arr[], int n)
{
    int start=0, end=n-1, temp;
    while(start < end)
    {
        temp=arr[start]; arr[start]=arr[end]; arr[end]=temp;
        start++; end--;
    }
}

/* Print array */
void printArr(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

/* ════════════════ STRING FUNCTIONS ════════════════ */

/* Custom strlen */
int myStrlen(char s[])
{
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

/* Custom strcpy */
void myStrcpy(char dest[], char src[])
{
    int i = 0;
    while(src[i] != '\0') { dest[i] = src[i]; i++; }
    dest[i] = '\0';
}

/* Custom strcat */
void myStrcat(char dest[], char src[])
{
    int i = myStrlen(dest), j = 0;
    while(src[j] != '\0') { dest[i++] = src[j++]; }
    dest[i] = '\0';
}

/* Reverse string */
void reverseStr(char s[])
{
    int start=0, end=myStrlen(s)-1;
    char temp;
    while(start < end)
    {
        temp=s[start]; s[start]=s[end]; s[end]=temp;
        start++; end--;
    }
}

/* Palindrome string check */
int isPalindromeStr(char s[])
{
    int start=0, end=myStrlen(s)-1;
    while(start < end)
    {
        if(s[start] != s[end]) return 0;
        start++; end--;
    }
    return 1;
}

/* Count vowels */
int countVowels(char s[])
{
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if(c>='A'&&c<='Z') c = c+32;    /* To lowercase */
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') count++;
    }
    return count;
}

/* Convert string to uppercase */
void toUpper(char s[])
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
        if(s[i]>='a' && s[i]<='z') s[i] -= 32;
}

int main()
{
    /* ── ARRAY SECTION ── */
    int arr[] = {64, 25, 12, 90, 45, 78, 33};
    int n = 7, i;

    printf("========== ARRAYS ==========\n\n");
    printf("Original Array  : "); printArr(arr, n);
    printf("Largest         : %d\n",   findLargest(arr, n));
    printf("Smallest        : %d\n",   findSmallest(arr, n));
    printf("Second Largest  : %d\n",   secondLargest(arr, n));

    reverseArray(arr, n);
    printf("Reversed        : "); printArr(arr, n);

    /* Restore original order for sort demo */
    int arr2[] = {64, 25, 12, 90, 45, 78, 33};
    bubbleSort(arr2, n);
    printf("Sorted (Bubble) : "); printArr(arr2, n);

    /* ── STRING SECTION ── */
    printf("\n========== STRINGS ==========\n\n");

    char s1[100] = "Manan";
    char s2[50]  = "Rami";
    char s3[100], s4[] = "madam";

    printf("String          : %s\n",  s1);
    printf("Custom strlen   : %d\n",  myStrlen(s1));

    myStrcpy(s3, s1);
    printf("Custom strcpy   : %s\n",  s3);

    myStrcat(s1, s2);
    printf("Custom strcat   : %s\n",  s1);

    char rev[100] = "Hello";
    reverseStr(rev);
    printf("Reversed string : %s\n",  rev);

    printf("Palindrome check: \"%s\" is %spalindrome\n",
           s4, isPalindromeStr(s4) ? "" : "NOT ");

    char vow[] = "Manan Rami";
    printf("Vowel count     : %d\n",  countVowels(vow));

    char up[] = "ahmedabad";
    toUpper(up);
    printf("To Uppercase    : %s\n",  up);

    return 0;
}
