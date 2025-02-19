// Input a number & reverse it
#include <stdio.h>
#include <conio.h>

int main()
{
   int x, temp, rev;
   printf("Enter the number: ");
   scanf("%d", &x);
   temp = x;
   rev = 0;
   while (temp > 0)
   {
      int rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
   }
   printf("The reverse of %d is %d", x, rev);

   getch();
   return 0;
}