// Concatenate two inputted strings
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("The concatenated string is: %s", str1);
   
   
   getch();
   return 0;
}