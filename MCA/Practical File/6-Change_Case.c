// Input an alphabet and convert it into its equivalent opposite case.
#include <stdio.h>
#include <conio.h>

int main()
{
   char ch;
abc: // label
   printf("Enter the alphabet: ");
   scanf(" %c", &ch);
   // if in uppercase
   if ((int)ch >= 65 & (int)ch <= 90)
      ch += 32;
   else if ((int)ch >= 97 & (int)ch <= 122)
      ch -= 32;
   else
   {
      printf("\n !! try agarin & enter an alphabet only\n");
      goto abc;
   }
   printf("After changing Case: %c", ch);

   getch();
   return 0;
}