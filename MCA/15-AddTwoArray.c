#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
}

void getArray(int *arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
}

int *addArray(int arr1[], int n1, int arr2[], int n2)
{
   int *arr = (int *)malloc(n1 * sizeof(int));
   
   for (int i = 0; i < n1; i++)
   {
      arr[i] = arr1[i] + arr2[i];
   }
   return arr;
}

int main()
{
   int arr1[] = {1, 2, 3, 4, 5};
   int n1 = sizeof(arr1) / sizeof(int);
   int arr2[] = {-10, -3, -4, -5, -6};
   int n2 = sizeof(arr2) / sizeof(int);
   int * result=addArray(arr1, n1, arr2, n2);
   printArray(result, n1);

   return 0;
}