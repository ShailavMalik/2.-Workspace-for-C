// macros are written in one line
// macros doesn't have termination ; at end
#include <stdio.h>

#define printArray(arr, n)      \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d  ", arr[i]);   \
    }

int main()
{
    int arr[5] = {2, 3, 5, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);

    return 0;
}