#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

int top = -1;
int MAX = 10;

void push(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    if (top == MAX - 1)
    {
        printf("OVERFLOW\n");
        return;
    }
    struct Node *ptr = head;
    temp->next = ptr;
    head = temp;
    top++;
}
int pop()
{
    if (top < 0)
    {
        printf("UNDERFLOW\n");
        return -9999;
    }
    int value = head->data;
    head = head->next;
    top--;
    return value;
}
void peek()
{
    if (top < 0)
    {
        printf("UNDERFLOW\n");
        return;
    }
    printf("PEEK : %d\n", head->data);
}

void printList()
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        push(i);
    }
    printList();
    for (int i = 10; i < 15; i++)
    {
        push(i);
    }
    printList();
    printf("POP: %d\n", pop());
    printList();
    peek();
    printList();
}