#include <stdio.h>

void search(int data[], int high, int low, int key)
{
    int mid = low + (high - low) / 2;
    if (data[mid] == key)
    {
        printf("ELEMENT FOUND\nPOSITION:%d", mid);
        return;
    }
    if (data[mid] > key)
    {
        search(data, high, mid + 1, key);
    }
    search(data, mid - 1, low, key);

    printf("ELEMENT NOT FOUND");
}

void sort(int data[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int data[10] = {5, 7, 2, 4, 1, 9, 6, 0, 3, 8};
    int size = sizeof(data) / sizeof(data[0]);
    int key;
    printf("ENTER KEY: ");
    scanf("%d", &key);
    sort(data, size);
    search(data, size, 0, key);
    return 0;
}