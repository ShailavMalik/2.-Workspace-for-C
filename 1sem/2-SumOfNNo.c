#include <stdio.h>

int main()
{
   int n;
   int num;
   printf("Enter the value of n :");
   scanf("%d", &n);
   int sum = 0;
   for (int i = 1; i <= n; i++)
   {
       printf("num%d:",i);
      scanf("%d", &num);
      sum = sum + num;
   }
   printf("sum is %d",sum);
   return 0;
}