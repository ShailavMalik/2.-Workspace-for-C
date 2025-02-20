// Input two nos. and print their sum using function
#include <stdio.h>
#include <conio.h>

int sum(int a, int b)
{
   return a+b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d", a, b, sum(a, b));
   
   
   getch();
   return 0;
}