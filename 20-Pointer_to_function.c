#include <stdio.h>

void func(int n)
{
    printf("%d",n);
}

int main()
{
    void (*ptr)(int)=&func;
    ptr(4);
    printf("\n%p",ptr);
   
   
   return 0;
}