// Check whether two arrays (of characters) are identical
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[100]="Hello";
    char str2[100]="Hello";
    strcmp(str1,str2)==0?printf("Both strings are identical"):printf("Both strings are not identical");

   
   getch();
   return 0;
}