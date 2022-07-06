#include <stdio.h>
#include <string.h>

int main()
{
   char firstName[10] = "Shailav";
   char lastName[10] = "Malik";

   strcat(firstName, lastName);
   printf("Name: %s\n", firstName);

   printf("%d\n", strcmp(firstName, lastName));
   // returns 0 if equal otherwise can return any integer

   strcpy(firstName, lastName);
   printf("%s\n", firstName);
   
   printf("%d\n",strlen(firstName));

   strrev(firstName);
   printf("%s",firstName);

   return 0;
}