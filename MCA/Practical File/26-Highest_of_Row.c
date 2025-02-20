// by Shailav Malik
// Store elements in a 2D array & find highest element of each row
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        int max=arr[i][0];
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
        printf("Highest element of row %d is %d\n",i+1,max);
    }
   
   getch();
   return 0;
}