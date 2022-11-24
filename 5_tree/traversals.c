#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
} *root = NULL;

struct node *insert(struct Node *ptr, int data)
{
    if (ptr == NULL)
    {
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->left = NULL;
        ptr->right = NULL;
    }
    else if (data < ptr->data)
        ptr->left = insert(ptr->left, data);
    else if (data > ptr->data)
        ptr->right = insert(ptr->right, data);
    else
        ptr->data = data;
    return ptr;
}

void preorder(struct Node *ptr)
{
    if (ptr == NULL)
        return;
    printf("%d  ", ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
}

void inorder(struct Node *ptr)
{
    if (ptr == NULL)
        return;
    inorder(ptr->left);
    printf("%d  ", ptr->data);
    inorder(ptr->right);
}

void postorder(struct Node *ptr)
{
    if (ptr == NULL)
        return;
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d  ", ptr->data);
}
int main()
{
    struct Node *root = NULL;
    for (int i = 0; i < 11; i++)
    {
        root = insert(root, i);
    }
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}