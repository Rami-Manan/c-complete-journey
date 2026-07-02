#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = 0, rear = 0, capacity;

/* Add element to rear of queue */
void enqueue(int val)
{
    if(rear == capacity)
    {
        printf("Queue is full!\n");
        return;
    }
    queue[rear++] = val;
    printf("Enqueued: %d\n", val);
}

/* Remove element from front of queue */
int dequeue()
{
    if(front == rear)
    {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front++];
}

/* Display queue */
void display()
{
    int i;
    if(front == rear) { printf("Queue empty\n"); return; }
    printf("Queue (front to rear): ");
    for(i = front; i < rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main()
{
    printf("Enter queue capacity: ");
    scanf("%d", &capacity);

    queue = (int *)calloc(capacity, sizeof(int));  /* Allocate + zero init */

    if(queue == NULL) { printf("Allocation failed!\n"); return 1; }

    enqueue(100); enqueue(200); enqueue(300);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();

    free(queue);
    return 0;
}
