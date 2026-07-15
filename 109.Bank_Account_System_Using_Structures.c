#include <stdio.h>

struct Account
{
    int   accNo;
    char  name[50];
    float balance;
};

/* Deposit amount into account */
void deposit(struct Account *acc, float amount)
{
    if(amount <= 0) { printf("Invalid amount!\n"); return; }
    acc->balance += amount;   /* -> operator accesses struct via pointer */
    printf("Deposited %.2f | New Balance: %.2f\n", amount, acc->balance);
}

/* Withdraw amount from account */
void withdraw(struct Account *acc, float amount)
{
    if(amount <= 0)              { printf("Invalid amount!\n"); return; }
    if(amount > acc->balance)    { printf("Insufficient balance!\n"); return; }
    acc->balance -= amount;
    printf("Withdrew %.2f | New Balance: %.2f\n", amount, acc->balance);
}

/* Display account info */
void display(struct Account acc)
{
    printf("\n--- Account Details ---\n");
    printf("Acc No  : %d\n",   acc.accNo);
    printf("Name    : %s\n",   acc.name);
    printf("Balance : %.2f\n", acc.balance);
}

int main()
{
    struct Account acc;

    printf("Account No : "); scanf("%d",  &acc.accNo);
    printf("Name       : "); scanf("%s",   acc.name);
    printf("Balance    : "); scanf("%f",  &acc.balance);

    deposit(&acc,  5000);
    withdraw(&acc, 2000);
    display(acc);

    return 0;
}
