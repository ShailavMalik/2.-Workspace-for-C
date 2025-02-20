// Store elements in a 2D array & transpose the elements
#include <stdio.h>
#include <conio.h>

void printMatrix(int a[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[10][10] = {0};
    printf("The matrix is:\n");
    printMatrix(a, 3, 3);
    printf("The transpose of the matrix is:\n");
    // code of transpose of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans[i][j] = a[j][i];
        }
    }
    printMatrix(trans, 3, 3);

    getch();
    return 0;
}