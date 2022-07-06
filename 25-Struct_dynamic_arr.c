#include <stdio.h>
#include <stdlib.h>

struct student
{
   int n;
   char favChar;
   int favNum;
   int *a;
};

int main()
{
   struct student s1;
   printf("Enter the size of array: ");
   scanf("%d", &s1.n);
   s1.a = (int *)malloc(s1.n * sizeof(int));
   for (int i = 0; i < s1.n; i++)
      s1.a[i] = i + 1;
   for (int i = 0; i < s1.n; i++)
      printf("%d ", s1.a[i]);

   return 0;
}