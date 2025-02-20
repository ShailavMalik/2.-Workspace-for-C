// Show the use of recursion in calculation of power. e.g. ab
#include <stdio.h>
#include <conio.h>

int powerCustom(int a, int b)
{
   if(b==0)
      return 1;
   else
      return a*powerCustom(a,b-1);
}

int main()
{
    int a,b;
    printf("Enter the value of a,b in format a^b: ");
    scanf("%d^%d",&a,&b);
    printf("The value of %d^%d is: %d",a,b,powerCustom(a,b));
   
   
   getch();
   return 0;
}