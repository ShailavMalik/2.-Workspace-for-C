//Program to Check if a number is armstrong or not
#include <stdio.h>
#include <math.h>

int count_digit(int a)
{
    int digit = 0;
    while (a != 0)
    {
        a = a / 10;
        digit++;
    }
    return digit;
}

int main()
{

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("No of digits are: %d\n", count_digit(num));
    int temp = num; // Stored the value of num in temp
    int rem, sum = 0;
    printf("\n");
    int counter = 0; // This will count the number of iteration
    while (temp != 0)
    {
        counter++;
        rem = temp % 10;
        printf("\nrem = %d\n", rem);                                                 // To print value of rem after each iteration
        printf("No of digits after %d iterations: %d\n", counter, count_digit(num)); // To print no of digits after each iteration
        int x = pow(rem, count_digit(num));
        printf("pow = %d\n", x); // To print value of pow at each iteration
        sum = sum + pow(rem, count_digit(num));
        temp = temp / 10;
        printf("After iteration, Sum = %d\n", sum);
    }
    printf("\n\n");
    printf("Sum = %d\n", sum); //The program shows inaccurate results due to use of intergers in pow function
    if (sum == num)
    {
        printf("%d is a armstrong number", num);
    }
    else
    {
        printf("%d is not a armstrong number", num);
    }

    return 0;
}