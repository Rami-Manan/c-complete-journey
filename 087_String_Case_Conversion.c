#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], upper[100], lower[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        /* Convert to uppercase */
        if(str[i] >= 'a' && str[i] <= 'z')
            upper[i] = str[i] - 32;
        else
            upper[i] = str[i];

        /* Convert to lowercase */
        if(str[i] >= 'A' && str[i] <= 'Z')
            lower[i] = str[i] + 32;
        else
            lower[i] = str[i];
    }

    upper[len] = '\0';
    lower[len] = '\0';

    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);

    return 0;
    
}
