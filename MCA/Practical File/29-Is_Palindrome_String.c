// Input a string and check it is palindrome or not
#include <stdio.h>
#include <conio.h>
#include <string.h>

int is_palindrome(char *str)
{
    int i, j;
    for(i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[10];
    printf("Enter a string: ");
    gets(str);
    if(is_palindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
   
   
   getch();
   return 0;
}