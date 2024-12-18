#include <stdio.h>

int binarySearch(int n, int *arr, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        printf("Inside while loop, mid = %d \n", mid);

        if (arr[mid] == key)
        {
            printf("%d is present in the array \n", key);
            return mid;
            printf("This will never be executed\n");
        }
        else if (arr[mid] < key)
            s = mid + 1;
        else if (arr[mid] > key)
            e = mid - 1;
    }
    printf("Outside while loop\n");
    printf("%d is not present in the array \n", key);
    return 0;
}

int main()
{
    int key;
    printf("Enter the element to be searched :");
    scanf("%d", &key);
    int arr[] = {1, 4, 8, 9, 14, 18, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(n, arr, key);
    if (index)
        printf("at index %d", index);

    return 0;
}