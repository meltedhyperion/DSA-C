#include <stdio.h>

void sort(int data[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void printArray(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
}

int main()
{
    int data[10] = {5, 7, 2, 4, 1, 9, 6, 0, 3, 8};
    int size = sizeof(data) / sizeof(data[0]);
    sort(data, size);
    printArray(data, size);
    return 0;
}