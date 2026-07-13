#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE] = {111, 222, 333, 444, 555};
    int loaded[SIZE];
    FILE *fp;
    int i;

    /* Write array to binary file */
    fp = fopen("array.bin", "wb");
    if(fp == NULL) { printf("Cannot create file!\n"); return 1; }

    fwrite(arr, sizeof(int), SIZE, fp);   /* Write all 5 integers at once */
    fclose(fp);
    printf("Array written to array.bin\n");

    /* Read array back from binary file */
    fp = fopen("array.bin", "rb");
    if(fp == NULL) { printf("Cannot read file!\n"); return 1; }

    fread(loaded, sizeof(int), SIZE, fp);   /* Read all 5 integers at once */
    fclose(fp);

    printf("Array loaded from file: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", loaded[i]);
    printf("\n");

    return 0;
}
