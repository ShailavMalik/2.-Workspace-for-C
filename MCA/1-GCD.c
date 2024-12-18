// program to find gcd
#include <stdio.h>
#include "1-GCD.h"

int findMin(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}

int findGcd(int a, int b)
{
    int temp = findMin(a, b);
    int ans = 1;
    for (int i = 1; i <= temp; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    return ans;
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("HCF of %d & %d is %d", a, b, findGcd(a, b));

    return 0;
}