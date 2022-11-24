#include <stdio.h>

void search(int data[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == key)
        {
            printf("ELEMENT FOUND\nPOSITION:%d", i);
            return;
        }
    }
    printf("ELEMENT NOT FOUND");
}
int main()
{
    int data[10] = {5, 7, 2, 4, 1, 9, 6, 0, 3, 8};
    int size = sizeof(data) / sizeof(data[0]);
    int key;
    printf("ENTER KEY: ");
    scanf("%d", &key);
    search(data, size, key);
    return 0;
}