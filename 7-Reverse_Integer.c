#include <stdio.h>

int main()
{
    int num, rem, rev = 0;
    printf("Enter the value of n: ");      
    scanf("%d", &num);             //421
    while(num!=0)
    {
        rem = num % 10;           //1   2   4
        rev = rev * 10 + rem;     //1   12  124
        num = num / 10;           //42  4   0
    }
    printf("%d",rev);

    return 0;
}