#include <stdio.h>
#include <stdlib.h>

#define printArray(arr, n)      \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d  ", arr[i]); \
    }

void insertAtRightPlace(int arr[], int size, int num)
{
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (num > arr[i])
            pos++;
    }

    // so we have to insert the element at pos

    // shifting array elements from pos to right direction
    for (int j = size - 1; j >= pos; j--)
    {
        arr[j+1] = arr[j];
    }
    arr[pos] = num;
}

// driver code
int main()
{
    int arr[10] = {-1, 1, 3, 5, 9, 14, 19};
    int n = 7;
    printArray(arr, n);
    insertAtRightPlace(arr, n, -2);
    printf("\n");
    printArray(arr, n+1);
    return 0;
}