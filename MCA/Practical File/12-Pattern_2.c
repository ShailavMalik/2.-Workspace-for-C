// 12
#include <stdio.h>
#include <conio.h>

int main()
{
   int n;
   printf("Enter n: ");
   scanf("%d", &n);
   int i, j;
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n - i; j++)
      {
         printf("%c\t", 'A' + j);
      }
      for (j = 0; j < 2 * i - 1; j++)
      {
         printf("\t");
      }
      if (i != 0)
      {
         for (j = n - i - 1; j >= 0; j--)
         {
            printf("%c\t", 'A' + j);
         }
      }
      else
      {
         for (j = n - i - 2; j >= 0; j--)
         {
            printf("%c\t", 'A' + j);
         }
      }
      printf("\n");
   }
   for (i = n - 2; i >= 0; i--)
   {
      for (j = 0; j < n - i; j++)
      {
         printf("%c\t", 'A' + j);
      }
      for (j = 0; j < 2 * i - 1; j++)
      {
         printf("\t");
      }
      if (i != 0)
      {
         for (j = n - i - 1; j >= 0; j--)
         {
            printf("%c\t", 'A' + j);
         }
      }
      else
      {
         for (j = n - i - 2; j >= 0; j--)
         {
            printf("%c\t", 'A' + j);
         }
      }
      printf("\n");
   }

   getch();
   return 0;
}