#include <stdio.h>

int main()
{
    int n;
    printf("Enter the num upto which you want to print palindrome number: ");
    scanf("%d",&n);
    for (int num = 0; num <= n; num++)
    {
        int temp=num;
        int rem, rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if (num == rev)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}