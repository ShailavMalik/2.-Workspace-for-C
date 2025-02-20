// Extract 'm' characters from a string, starting at the 'nth' character, and print it
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[100], substr[100];
    int n, m;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the starting position: ");
    scanf("%d", &n);
    printf("Enter the number of characters to extract: ");
    scanf("%d", &m);
    strncpy(substr, str + n, m);
    substr[m] = '\0';
    printf("The extracted string is: %s", substr);
   
   getch();
   return 0;
}