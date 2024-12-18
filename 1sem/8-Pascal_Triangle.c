#include <stdio.h>

int comb(int n,int r) // 5  2
{int nmr=1,dem=1;
    for(int i=1;i<=r;i++)
    {
    nmr=nmr*(n-i+1);
    dem=dem*i;
    }
    int ans=nmr/dem;
    return ans;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",comb(i-1,j-1));
        }
        printf("\n");
    }

    return 0;
}