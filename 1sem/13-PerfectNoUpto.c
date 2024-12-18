#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;
    printf("Perfect numbers are :") ;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == j)
        {
            printf("%d\t", j);
        }
    }

    return 0;
}