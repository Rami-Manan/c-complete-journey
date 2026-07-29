#include <stdio.h>

/* Returns 1 if character is a vowel */
int isVowel(char c)
{
    /* Convert to lowercase before checking. */
    if(c >= 'A' && c <= 'Z') c = c + 32;

    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        /* Only count letters, skip digits/spaces/symbols. */
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(isVowel(str[i]))
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);

    return 0;
}
