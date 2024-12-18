#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d%d", &num1, &num2);
    int hcf = 1;
    int num;
    if (num1 < num2)
    {
        num = num1;
    }
    else
    {
        num = num2;
    }
    for (int i = 1; i <= num; i++)
    {


        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf =  i;
        }
    }
    printf("HCF of %d and %d is %d", num1, num2, hcf);

    return 0;
}