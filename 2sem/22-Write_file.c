#include <stdio.h>

int main()
{
   FILE *fp;
   fp=fopen("file.txt","w");
   fprintf(fp,"%s","That is a file");

   fclose(fp);
   
   return 0;
}