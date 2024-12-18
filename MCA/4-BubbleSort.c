#include <stdio.h>

void bubbleSort(int size, int *arr)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 7, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("size = %d \n", n);
    bubbleSort(n, arr);
    // printing sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}