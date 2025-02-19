#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int N;
    printf("Enter the numbers you want to store: ");
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));

    // Initialising the array
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    // For calculation Sum & Average
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    printf("The Sum of the numbers is %d\n", sum);
    printf("The Average of the numbers is %f\n", (float)(sum) / N);

    free(arr);

    return 0;
}
