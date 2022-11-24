#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

bool isEmpty()
{
    return head == NULL;
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

void insertAtLast(int data)
{
    struct Node *ptr = head;

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insertAtFirst(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void deleteAtLast()
{

    struct Node *ptr = head;
    if (ptr == NULL)
    {
        return;
    }
    while (ptr->next != NULL)
    {
        if (ptr->next->next == NULL)
        {
            ptr->next = NULL;
            return;
        }
        ptr = ptr->next;
    }
    ptr = NULL;
}

void deleteAtFirst()
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        return;
    }
    head = ptr->next;
}

int main()
{
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        insertAtLast(i);
    }
    printList();
    for (int i = 10; i < 15; i++)
    {
        insertAtFirst(i);
    }
    printList();
    deleteAtFirst();
    printList();
    deleteAtLast();
    printList();
}