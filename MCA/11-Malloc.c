#include <stdio.h>
#include <malloc.h>

int main()
{
    int *ptr, n, i;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Prompt the user to enter the elements
    printf("Now enter %d elements : ", n);

    // Allocate memory for n elements using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Read the elements from the user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Print the elements entered by the user
    printf("The elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}