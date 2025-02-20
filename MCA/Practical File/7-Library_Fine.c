// A library fines for late book returns: 50 paisa for 1-5 days, Rs1 for 6-10 days, and Rs5 for over 10 days.
// Membership is cancelled if a book is over 30 days late. Write a program to input days late and
// display the fine or message.
#include <stdio.h>
#include <conio.h>

int main()
{
   int days;
   printf("Enter late days: ");
   scanf("%d", &days);
   if (days < 1)
      printf("There is no fine as return is not late");
   else if (days >= 1 && days <= 5)
      printf("There is Rs0.5 fine");
   else if (days >= 6 && days <= 10)
      printf("There is Rs1 fine");
   else if (days > 10 && days <= 30)
      printf("There is Rs5 fine");
   else if (days > 30)
      printf("Membership is Cancelled");

   getch();
   return 0;
}