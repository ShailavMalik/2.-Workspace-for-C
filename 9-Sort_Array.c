#include <stdio.h>
// selection sort

#define printArray(arr, n)     \
   for (int i = 0; i < n; i++) \
   {                           \
      printf("%d  ", arr[i]);  \
   }                           \
   printf("\n");

void sortArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      int minIndex = i;
      for (int j = i + 1; j < size; j++)
      {
         if (arr[j] < arr[minIndex])
         {
            minIndex = j;
         }
      }
         // swap these
         int temp = arr[i];
         arr[i] = arr[minIndex];
         arr[minIndex] = temp;
      
   }
}

int main()
{
   int arr[] = {2, 9, 1, 0, -1, -5};
   int n = sizeof(arr) / sizeof(arr[0]);
   printArray(arr, n);

   sortArray(arr, n);
   printArray(arr, n);

   return 0;
}