#include <stdio.h>

void printArray(int n, int arr[])
{
   for (int i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
}

void insertionSort(int n, int *arr)
{
   // we start from second element of the array, single element is always sorted
   for (int i = 1; i < n; i++)
   {
      int key = arr[i];
      int j = i - 1;
      /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
      for (; j >= 0; j--)
      {
         if (arr[j] > key)
            arr[j + 1] = arr[j];
         else
            break;
      }
      arr[j + 1] = key;
   }
}

int main()
{
   int arr[] = {4, 1, 2, 8, 6, 9};
   int n = sizeof(arr) / sizeof(arr[0]);
   insertionSort(n, arr);
   printf("Array after sorting: ");
   printArray(n, arr);

   return 0;
}