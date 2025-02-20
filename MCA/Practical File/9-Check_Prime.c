// Input any no. and check it is Prime or not
#include <stdio.h>
#include <conio.h>

int main()
{
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   // iterate upto root n
   for (int i = 2; i * i <= n; i++)
   {
      if (n % 2 == 0)
      {
         printf("%d is not prime", n);
         return 0;
      }
   }
   // there is not divisor upto n it is prime
   printf("%d is prime", n);

   getch();
   return 0;
}