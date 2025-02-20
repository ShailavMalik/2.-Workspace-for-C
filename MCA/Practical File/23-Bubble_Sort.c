// Sort the elements of any array of 10 nos. in ascending order using Bubble Sort
#include <stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting array elements are - \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\nAfter sorting array elements are - \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}