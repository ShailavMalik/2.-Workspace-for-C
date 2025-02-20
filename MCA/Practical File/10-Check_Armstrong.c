// Input any no. and check it is Armstrong no. or not
#include <stdio.h>
#include <conio.h>

// custom function to calc power (x^y)
int powerCustom(int x, int y)
{
   int ans = 1;
   for (int i = 1; i <= y; i++)
   {
      ans = ans * x;
   }
   return ans;
}

int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d", &num);
   int no_of_digit = 0;
   int temp = num;
   // loop to count no of digits in the number
   while (temp > 0)
   {
      temp /= 10;
      no_of_digit++;
   }
   temp = num; // resetting temp to num
   int ans = 0;
   while (temp > 0)
   {
      int rem = temp % 10;
      ans = ans + powerCustom(rem, no_of_digit);
      temp /= 10;
   }

   if (ans == num)
      printf("%d is armstrong", num);
   else
      printf("%d is not armstrong", num);

   getch();
   return 0;
}