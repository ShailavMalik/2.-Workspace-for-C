// program to make 'md' DOS command
#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char command[20];
  char str1[]="mkdir";
  strcpy(command,str1);
  strcat(command," ");
  strcat(command,argv[1]);
   system(command);

   return 0;
}