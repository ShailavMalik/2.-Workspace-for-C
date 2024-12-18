#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }

    else
        printf("Memory allocated successfully using calloc.\n");
    printf("%p\n", &arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nMemory freed successfully.");
    int m;
    printf("Enter new size of array: ");
    scanf("%d", &m);
    arr = realloc(arr, m * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory not allocated.");
        exit(0);
    }
    else
        printf("Memory reallocated successfully using realloc\n");
    printf("address = %p\n", &arr);
    for (int i = n; i < m; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}