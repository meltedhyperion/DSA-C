#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} *head = NULL;

void insertAtFirst(int data)
{
    struct Node *ptr = head;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (ptr == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtLast(int data)
{
    struct Node *ptr = head;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (ptr == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}

void print()
{
    if (head == NULL)
    {
        return;
    }
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void printReverse()
{
    if (head == NULL)
    {
        return;
    }
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
    {
        /* code */
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        insertAtLast(i);
    }
    print();
    for (int i = 0; i < 5; i++)
    {
        insertAtFirst(i);
    }
    printReverse();

    return 0;
}