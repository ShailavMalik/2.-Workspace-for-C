#include <stdio.h>

// funtion to selection sort
void selectionSort(int size, int *arr)
{
    for (int i = 0; i < size; i++)
    {
        // assume first element is the smallest one
        int minIndex = i;

        // iterate throught the unsorted arrray
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // swap the current element with the smallest element of the array
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int arr[] = {3, 7, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(n, arr);
    // printing sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}