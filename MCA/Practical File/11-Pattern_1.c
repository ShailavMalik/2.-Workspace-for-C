//
#include <stdio.h>
#include <conio.h>

int main()
{
   int n;
   printf("Enter n: ");
   scanf("%d", &n);

   // loop for upper half
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n - i + 1; j++)
      {
         printf("*\t");
      }
      // loop for spacing
      int space = 2 * i - 3;
      for (int j = 1; j <= space; j++)
      {
         printf("\t");
      }

      for (int j = 1; j <= n - i + 1; j++)
      {
         if (i == 1 && j == n)
            continue;

         printf("*\t");
      }

      printf("\n");
   }
   // loop for lower half
   for (int i = 1; i <= n - 1; i++)
   {
      for (int j = 1; j <= i + 1; j++)
      {
         printf("*\t");
      }
      // loop for spacing
      int space = 2 * (n - i) - 3;
      for (int j = 1; j <= space; j++)
      {
         printf("\t");
      }

      for (int j = 1; j <= i + 1; j++)
      {
         if(i == n-1 && j == 1)
            continue;
         printf("*\t");
      }

      printf("\n");
   }



   getch();
   return 0;
}