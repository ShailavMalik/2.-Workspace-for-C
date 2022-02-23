#include <stdio.h>
#include <math.h>
#define pi 22.0 / 7

unsigned long long int fact(int n)
{
    unsigned long long int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
   // printf("%d\n\n\n",sizeof(long double));
    int angle_D;
    printf("Enter the angle: ");
    scanf("%d", &angle_D);
    float x = (angle_D * pi) / 180; // converting angle to randi
    float sin = 0;
    int sign = 1;
    for (int i = 1; i <= 100; i = i + 2) // 1 3 5 7 9 11
    {
         printf("fact(%d)= %lu\n",i,fact(i));

        //printf("%d\n",sign);
        sin = sin + (sign * pow(x, i) / fact(i));
        sign = -sign;

        //printf("sin = %f\n", sin);
    }
    printf("sin%d = %f", angle_D, sin);
    return 0;
}