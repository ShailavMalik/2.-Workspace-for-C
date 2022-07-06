#include <stdio.h>

int main()
{
   union random
   {
      int n;
      int m;
      char c;
      float f;
   };

   printf("sizeof(random) : %d\n", sizeof(union random));
   union random u1;
   u1.n = 5;
   printf("n = %d\n", u1.n);
   u1.m = 10;
   printf("n = %d", u1.m);
   // printf("sum = %d",u1.n+u1.m);

   return 0;
}