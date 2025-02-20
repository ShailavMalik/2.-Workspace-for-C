// Search for a particular no. in an array of 10 nos. using Linear Search
#include <stdio.h>
#include <conio.h>

int LinearSearch(int *arr, int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 28, 7, 0, 85, 2, 6, 8, 9, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    int index = LinearSearch(arr, n, key);
    if (index == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d", index);
    }

    getch();
    return 0;
}