#include <stdio.h>
#include <stdlib.h>

/* Define node structure */
struct Node
{
    int         data;    /* Data stored in node. */
    struct Node *next;   /* Pointer to next node */
};

/* Create a new node dynamically */
struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    newNode->data = value;   /* Set data */
    newNode->next = NULL;    /* New node has no next yet */

    return newNode;
}

/* Print the linked list */
void printList(struct Node *head)
{
    struct Node *current = head;

    printf("Linked List: ");
    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;   /* Move to next node */
    }
    printf("NULL\n");
}

int main()
{
    /* Create nodes */
    struct Node *head  = createNode(10);
    struct Node *node2 = createNode(20);
    struct Node *node3 = createNode(30);

    /* Link nodes together */
    head->next  = node2;
    node2->next = node3;

    printList(head);

    /* Free all nodes */
    free(node3);
    free(node2);
    free(head);

    return 0;
}
