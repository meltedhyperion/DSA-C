#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MAX = 10;
int stack[100];
int top = -1;
bool isEmpty()
{
    if (top < 0)
    {
        printf("EMPTY\n");
        return true;
    }
    printf("NOT EMPTY\n");
    return false;
}

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("OVERFLOW\n");
        return;
    }
    stack[++top] = data;
}

int pop()
{
    if (isEmpty())
    {
        printf("UNDERFLOW\n");
        return -9999;
    }
    return stack[top--];
}
void peek()
{
    if (isEmpty())
    {
        printf("UNDERFLOW\n");
        return;
    }
    printf("%d\n", stack[top]);
}
void print()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    isEmpty();
    for (int i = 0; i < 8; i++)
    {
        push(i);
    }
    print();
    peek();
    printf("POP: %d\n", pop());
    print();
    push(9);
    push(10);
    push(11);
    push(12);
    print();
    return 0;
}