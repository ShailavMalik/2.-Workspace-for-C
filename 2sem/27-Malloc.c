#include <stdio.h>
#include <stdlib.h> // header file to use dynamic allocation functions

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // malloc creates a single block of specified size in heap and return pointer of type void (void *)
    // to its address which can be typecasted to any datatype
    int *ptr = malloc(n * sizeof(int));

    // memory not allocated
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    // memory successfully allocated
    else
        printf("Memory successfully allocated using malloc()\n");

    // ptr now contains base address of block created by malloc
    printf("&prt = %p\n", &ptr);

    // when uninitialised it contains garbage value
    printf("*ptr = %d\n", *ptr);

    // storing values to the array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    // printing array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}