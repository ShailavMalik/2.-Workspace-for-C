#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n==2)
    {
        printf("%d is prime",n);
    }
    for (int i = 2; i < n; i++)
    {
       if(n%i==0)
       {
           printf("%d is not prime",n);
           break;
    }
    if(i==n-1)
    {
        printf("%d is prime",n);
    }
    }

    return 0;
}