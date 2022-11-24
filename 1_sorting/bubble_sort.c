#include <stdio.h>

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