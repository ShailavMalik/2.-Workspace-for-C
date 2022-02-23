#include <stdio.h>

int main()
{
   int n,r;
   printf("Enter the value of n & r: ");
   scanf("%d%d",&n,&r);
   int nmr=1,dem=1,num=1;
   for(int i=n;i>n-r;i--)
   {
       nmr=nmr*i;
       dem=dem*num;
       num++;
      
   }
   printf("%dC%d=%d",n,r,nmr/dem);
   
   return 0;
}