#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Enter the order of 2D Matrix: ");
    scanf("%d %d", &m, &n);
    int **arr = (int **)malloc(m * sizeof(*arr));
   
    for (int i = 0; i < m; i++)
    {
        arr[i] = (int *)malloc(n* sizeof(int));
    }

 printf("Enter the 2D array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}