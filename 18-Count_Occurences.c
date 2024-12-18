#include <stdio.h>

int main()
{
    char line[20];
    char ch;
   printf("Enter the string: ");
   gets(line);
   printf("Enter character to be searched: ");
   scanf("%c",&ch);
   int count=0;
   for(int i=0;line[i];i++)
   { 
    if(line[i]==ch)
     count++;
   }

   printf("character '%c' occur %d times",ch,count);
  
   
   return 0;
}