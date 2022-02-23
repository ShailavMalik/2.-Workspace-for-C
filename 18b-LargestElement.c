// Program to find the largest element of an array
#include <stdio.h>

int main()
{
    int x[10];
    int max;
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &x[i]);

        if (i == 0) //It will run only one time at i=0
        {
            max = x[0];
        }

        if (max < x[i])
        {
            max = x[i];
        }
    }
    printf("The largest element of array is %d", max);
    return 0;
}