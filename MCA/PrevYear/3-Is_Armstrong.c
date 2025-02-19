// Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the number of digits
#include <stdio.h>
#include <conio.h>
#include <math.h>

void isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    isArmstrong(num);
    getch();
    return 0;
}

void isArmstrong(int num)
{
    int ans = 0;
    int temp = num;
    int nod = 0; // variable to hold no of digits in the number
    // loop to count no of digits in the number
    while (temp > 0)
    {
        nod++;
        temp = temp / 10;
    }
    printf("nod= %d\n ", nod);
    temp = num; // resetting temp to num
    // loop to check armstrong number
    while (temp > 0)
    {
        int d = temp % 10;
        ans += pow(d, nod);
        temp /= 10;
        printf("ans= %d\n", ans);
    }
    if ((int)ans == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);
}