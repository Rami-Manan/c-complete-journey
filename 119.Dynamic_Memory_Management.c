/*
 * Program     : Dynamic Memory Management - All Concepts in One
 * Description : Covers all major memory management concepts:
 *               → malloc()  - allocate uninitialized memory
 *               → calloc()  - allocate zero-initialized memory
 *               → realloc() - resize existing allocation
 *               → free()    - release memory
 *               → Memory leak explanation
 *               → Dangling pointer fix
 *               → Dynamic 2D matrix
 *               → Dynamic linked list node
 *               → Dynamic string array
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Node structure for linked list demo */
struct Node
{
    int         data;
    struct Node *next;
};

/* ── Create linked list node dynamically ── */
struct Node* createNode(int val)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if(!node) { printf("malloc failed!\n"); return NULL; }
    node->data = val;
    node->next = NULL;
    return node;
}

/* ── Print linked list ── */
void printList(struct Node *head)
{
    struct Node *cur = head;
    while(cur)
    {
        printf("%d → ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

/* ── Free entire linked list ── */
void freeList(struct Node *head)
{
    struct Node *temp;
    while(head)
    {
        temp = head;
        head = head->next;
        free(temp);   /* Free one node at a time */
    }
}

int main()
{
    int i;

    printf("========== DYNAMIC MEMORY - ALL CONCEPTS ==========\n\n");

    /* ════════════════════════════════
       1. MALLOC — uninitialized memory
       ════════════════════════════════ */
    printf("── 1. malloc() ──\n");
    int *arr1 = (int *)malloc(5 * sizeof(int));
    if(!arr1) { printf("malloc failed!\n"); return 1; }

    for(i = 0; i < 5; i++) arr1[i] = (i+1) * 10;  /* Fill manually */

    printf("malloc array : ");
    for(i = 0; i < 5; i++) printf("%d ", arr1[i]);
    printf("\n\n");

    /* ═════════════════════════════════
       2. CALLOC — zero initialized memory
       ═════════════════════════════════ */
    printf("── 2. calloc() ──\n");
    int *arr2 = (int *)calloc(5, sizeof(int));
    if(!arr2) { printf("calloc failed!\n"); return 1; }

    printf("calloc array (before fill): ");
    for(i = 0; i < 5; i++) printf("%d ", arr2[i]);  /* All zeros */
    printf("\n\n");

    /* ═════════════════════════════════
       3. REALLOC — resize memory block
       ═════════════════════════════════ */
    printf("── 3. realloc() ──\n");
    /* Resize arr1 from 5 elements to 10 elements */
    arr1 = (int *)realloc(arr1, 10 * sizeof(int));
    if(!arr1) { printf("realloc failed!\n"); return 1; }

    for(i = 5; i < 10; i++) arr1[i] = (i+1) * 10;  /* Fill new slots */

    printf("After realloc (10 elements): ");
    for(i = 0; i < 10; i++) printf("%d ", arr1[i]);
    printf("\n\n");

    /* ═════════════════════════════════
       4. DYNAMIC 2D MATRIX
       ═════════════════════════════════ */
    printf("── 4. Dynamic 2D Matrix (3x3) ──\n");
    int rows = 3, cols = 3;
    int **matrix = (int **)malloc(rows * sizeof(int *));

    for(i = 0; i < rows; i++)
        matrix[i] = (int *)malloc(cols * sizeof(int));

    /* Fill with multiplication table */
    int j;
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            matrix[i][j] = (i+1) * (j+1);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%4d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");

    /* ═════════════════════════════════
       5. DYNAMIC STRING ARRAY
       ═════════════════════════════════ */
    printf("── 5. Dynamic String Array ──\n");
    char *names[] = {"Manan", "Raj", "Priya"};
    int  nameCount = 3;
    char **dynNames = (char **)malloc(nameCount * sizeof(char *));

    for(i = 0; i < nameCount; i++)
    {
        dynNames[i] = (char *)malloc((strlen(names[i]) + 1) * sizeof(char));
        strcpy(dynNames[i], names[i]);   /* Copy each name */
    }

    printf("Stored names: ");
    for(i = 0; i < nameCount; i++) printf("%s ", dynNames[i]);
    printf("\n\n");

    /* ═════════════════════════════════
       6. DYNAMIC LINKED LIST
       ═════════════════════════════════ */
    printf("── 6. Dynamic Linked List ──\n");
    struct Node *head  = createNode(10);
    struct Node *node2 = createNode(20);
    struct Node *node3 = createNode(30);
    head->next  = node2;
    node2->next = node3;

    printf("Linked List: ");
    printList(head);
    printf("\n");

    /* ═════════════════════════════════
       7. FREE ALL MEMORY
       Every malloc/calloc needs a free()
       Set pointer to NULL after free
       to prevent dangling pointer
       ═════════════════════════════════ */
    printf("── 7. Freeing All Memory ──\n");

    free(arr1);   arr1 = NULL;   printf("✓ arr1 freed\n");
    free(arr2);   arr2 = NULL;   printf("✓ arr2 freed\n");

    for(i = 0; i < rows; i++) free(matrix[i]);
    free(matrix); matrix = NULL; printf("✓ matrix freed\n");

    for(i = 0; i < nameCount; i++) free(dynNames[i]);
    free(dynNames); dynNames = NULL; printf("✓ dynNames freed\n");

    freeList(head); head = NULL; printf("✓ linked list freed\n");

    printf("\nRule: Every malloc() must have a matching free()\n");
    printf("Rule: Always set pointer to NULL after free()\n");

    return 0;
}
