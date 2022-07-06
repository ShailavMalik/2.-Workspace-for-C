// C Program to demonstrate the use of fseek()
#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  fp = fopen("test.txt", "r");
  if (fp == NULL)
  {
    printf("File doesn't exist.");
    exit(1);
  }

  // Moving pointer to end
  fseek(fp, 5, SEEK_SET);

  // Printing position of pointer
  printf("%d\n", ftell(fp));
  char ch;
  fscanf(fp, "%c", &ch);
  printf("%c", ch);

  fclose(fp);

  return 0;
}