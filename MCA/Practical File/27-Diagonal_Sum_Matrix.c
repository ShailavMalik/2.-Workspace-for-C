// Store elements in a 2D array & find sum of each diagonal and compare which is greater
#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10]={{1,8,3},{4,4,6},{7,0,9}};
    int i,j,sum1=0,sum2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            if(i+j==2)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    printf("Sum of diagonal 1 is %d\n",sum1);
    printf("Sum of diagonal 2 is %d\n",sum2);
    if(sum1>sum2)
    {
        printf("Diagonal 1 is greater");
    }
    else if(sum2>sum1)
    {
        printf("Diagonal 2 is greater");
    }
    else
    {
        printf("Both are equal");
    }
   
   
   getch();
   return 0;
}