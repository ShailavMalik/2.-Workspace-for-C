#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, *arr, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter new size of array: ");
    scanf("%d", &m);
    arr = realloc(arr, m * sizeof(int));

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < m; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}