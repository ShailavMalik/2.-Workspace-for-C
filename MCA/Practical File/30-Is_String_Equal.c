// Input two string and check whether the two strings are equal or not
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
    strcmp(str1, str2) == 0 ? printf("The two strings are equal") : printf("The two strings are not equal");

    getch();
    return 0;
}