// Search for a particular no. in an array of 10 nos. using Binary Search
#include <stdio.h>
#include <conio.h>

int binarySearch(int * arr, int size, int key)
{
   int low = 0, high = size - 1, mid;
   while(low <= high)
   {
      mid = (low + high) / 2;
      if(arr[mid] == key)
         return mid;
      else if(arr[mid] < key)
         low = mid + 1;
      else
         high = mid - 1;
   }
   return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    printf("Enter the no. to be searched: ");
    scanf("%d", &key);
    int index = binarySearch(arr, 10, key);
    if(index == -1)
       printf("Element not found\n");
    else
       printf("Element found at index %d\n", index);
   
   
   getch();
   return 0;
}