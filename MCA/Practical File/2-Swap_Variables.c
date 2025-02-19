// Swaps the contents of two variables with and without using a third variable
#include <stdio.h>
#include <conio.h>

int main()
{
   int num1 = 5, num2 = 9, num3;
   printf("Initially, num1:%d num2:%d\n", num1, num2);
   // using third variable
   num3 = num2;
   num2 = num1;
   num1 = num3;
   printf("Afer First Swap, num1:%d num2:%d\n", num1, num2);
   // without using third variable
   num1 = num1 + num2;
   num2=num1-num2;
   num1=num1-num2;
   printf("Afer Second Swap, num1:%d num2:%d", num1, num2);

   getch();
   return 0;
}