// Input ten characters and count how many are uppercase, lowercase, digits & special symbols
#include <stdio.h>
#include <conio.h>

int main()
{
   char ch;
   int upper = 0, lower = 0, digit = 0, special = 0;
   printf("Enter 10 characters: ");
   for (int i = 0; i < 10; i++)
   {
      ch = getche();
      if (ch >= 'A' && ch <= 'Z')
         upper++;
      else if (ch >= 'a' && ch <= 'z')
         lower++;
      else if (ch >= '0' && ch <= '9')
         digit++;
      else
         special++;
   }
   printf("\nUppercase: %d\nLowercase: %d\nDigits: %d\nSpecial: %d", upper, lower, digit, special);
   
   
   getch();
   return 0;
}