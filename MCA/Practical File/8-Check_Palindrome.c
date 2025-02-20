// Input any no. and check it is Palindrome or not
#include <stdio.h>
#include <conio.h>

int main()
{
   int n;
   printf("Enter the number: ");
   scanf("%d", &n);
   int temp = n;
   int rev = 0;
   while (temp > 0)
   {
      int rem = temp % 10;
      rev = rev * 10 + rem;
      temp /= 10;
   }

   if (rev == n)
      printf("%d is Palindrome",n);
   else
      printf("%d is not Palindrome",n);

   getch();
   return 0;
}