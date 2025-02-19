#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 2, 9, 4};
    int *ptr = arr; // pointer to the base address of array
    int size = sizeof(arr) / sizeof(arr[0]);

    // transversing the array & adding elements using pointer
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i);
        // sum += ptr[i];
    }
    printf("Sum of the array elements: %d", sum);

    return 0;
}