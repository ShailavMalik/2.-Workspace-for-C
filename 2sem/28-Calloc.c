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

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    printf("\nMemory freed successfully.");
    return 0;
}