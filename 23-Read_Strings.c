#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;
   fp = fopen("test.txt", "r");
   if (fp == NULL)
   {
      printf("File doesn't exist");
      exit(1);
   }

   char string[20];
   fscanf(fp, "%s", &string);
   printf("%s\n", string);
   fscanf(fp, "%s", &string);
   printf("%s", string);

   return 0;
}