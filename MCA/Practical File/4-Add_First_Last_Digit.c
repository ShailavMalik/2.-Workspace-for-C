// Input a number & to obtain the sum of its first and last digit
#include <stdio.h>
#include <conio.h>

int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   int temp = num;
   int firstDigit = temp % 10;
   int rem = 0;
   while (temp > 0)
   {
      temp = temp / 10;
      if (temp == 0)
         break;
      rem = temp % 10;
   }
   int lastDigit = rem;
   int sum = firstDigit + lastDigit;
   printf("The Sum of first & last digit in %d is %d", num, sum);

   getch();
   return 0;
}