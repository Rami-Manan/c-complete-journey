#include <stdio.h>
#include <string.h>
 
#define CREDENTIALS_FILE "users.txt"

/* Save new user to file */
void registerUser()
{
    FILE *fp = fopen(CREDENTIALS_FILE, "a");
    char username[50], password[50];

    printf("Enter username: "); scanf("%s", username);
    printf("Enter password: "); scanf("%s", password);

    fprintf(fp, "%s %s\n", username, password);   /* Store in file */
    fclose(fp);

    printf("User registered!\n");
}

/* Check if username+password exists in file */
void loginUser()
{
    FILE *fp = fopen(CREDENTIALS_FILE, "r");
    char username[50], password[50];
    char fileUser[50], filePass[50];
    int found = 0;

    if(fp == NULL) { printf("No users registered yet!\n"); return; }

    printf("Enter username: "); scanf("%s", username);
    printf("Enter password: "); scanf("%s", password);

    while(fscanf(fp, "%s %s", fileUser, filePass) == 2)
    {
        if(strcmp(username, fileUser) == 0 &&
           strcmp(password, filePass) == 0)
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if(found) printf("Login successful! Welcome, %s\n", username);
    else      printf("Invalid username or password\n");
}

int main()
{
    int choice;
    printf("1. Register\n2. Login\nChoice: ");
    scanf("%d", &choice);

    if(choice == 1)      registerUser();
    else if(choice == 2) loginUser();
    else                 printf("Invalid choice\n");

    return 0;
}
