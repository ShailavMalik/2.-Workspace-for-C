// Enter a positive integer and its base. Write a program to 
// display the number, base, and its converted form.
#include <stdio.h>
#include <conio.h>

int main()
{
   int num, base;
   printf("Enter a positive integer: ");
   scanf("%d", &num);
   printf("Enter the base: ");
   scanf("%d", &base);
   printf("Number: %d\nBase: %d\nConverted form: ", num, base);
   while (num > 0)
   {
      printf("%d", num % base);
      num /= base;
   }
   
   
   getch();
   return 0;
}