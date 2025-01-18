/* Function used in File handling 
   FILE, fopen, fclose
   fgetc(), fputc(), fscanf(), fprintf(),
   fseek(),tell(),fwrite, fread
   eof, feof
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp = fopen("new.txt", "r");
   if (fp == NULL)
   {
      printf("Error in opening file");
      return 1;
   }

   char st[50];
   wwhile( fscanf(fp, "%s", &st));
   printf("%s\n", st);

   // char ch;
   // int res = fscanf(fp, "%s", st);
   // printf("%c\n", st);                                                                            


   // printf("%d", res);

   fclose(fp);

   return 0;
}