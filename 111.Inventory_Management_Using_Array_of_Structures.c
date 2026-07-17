

#include <stdio.h>
#include <string.h>

struct Item
{
    char  name[50];
    int   quantity;
    float price;
};

int main()
{
    struct Item inventory[100];
    int n, i, maxIdx = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nItem %d:\n", i+1);
        printf("Name     : "); scanf("%s",  inventory[i].name);
        printf("Quantity : "); scanf("%d", &inventory[i].quantity);
        printf("Price    : "); scanf("%f", &inventory[i].price);
    }

    /* Find most expensive item */
    for(i = 1; i < n; i++)
        if(inventory[i].price > inventory[maxIdx].price)
            maxIdx = i;

    printf("\n--- Inventory ---\n");
    printf("%-20s %-10s %-10s %-10s\n", "Name", "Qty", "Price", "Total");
    float grandTotal = 0;

    for(i = 0; i < n; i++)
    {
        float total = inventory[i].quantity * inventory[i].price;
        grandTotal += total;
        printf("%-20s %-10d %-10.2f %-10.2f\n",
               inventory[i].name, inventory[i].quantity,
               inventory[i].price, total);
    }

    printf("Grand Total: %.2f\n", grandTotal);
    printf("Most Expensive: %s (%.2f)\n",
           inventory[maxIdx].name, inventory[maxIdx].price);

    return 0;
}
