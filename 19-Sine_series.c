#include <stdio.h>
#include <math.h>

int fact(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int sineSeries(int x, int n)
{
    int ans = 0;
    int sign = -1;
    for (int i = 0; i < n; i++)
    {
        sign *= -1;
        int cnt = 1;
        ans += ( pow(x, cnt) * sign) / fact(cnt);
        printf("%d  ",ans);
        cnt += 2;
    }
    return ans;
}

int main()
{
    int ans = sineSeries(3.14, 5);
    printf("ans = %d", ans);

    return 0;
}