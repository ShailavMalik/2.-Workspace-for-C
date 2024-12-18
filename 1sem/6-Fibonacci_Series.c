// 0 1 1 2 3 5 8 13 21 34 55
#include <stdio.h>

int main()
{
    int n;
    printf("How many terms of Faconacci series you want to display: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("%d\t%d\t", a, b);
    for (int i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\t",b );
    }

    return 0;
}