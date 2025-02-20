// Sort the elements of any array of 10 nos. in ascending order using Selection Sort
#include <stdio.h>
#include <conio.h>

void selectionSort(int *arr,int size)
{
    int i,j,temp,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("\nSorted Array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[10]={10,9,0,1,8,15,28,2,1,52};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array is: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    selectionSort(arr,size);
   
   
   getch();
   return 0;
}