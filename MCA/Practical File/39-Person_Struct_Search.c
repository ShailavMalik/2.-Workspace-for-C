// Search the name and address of person having age more that 30 years in the file ‘persons.txt’.
#include <stdio.h>
#include <conio.h>

struct person
{
   char name[20];
   char address[50];
   int age;
};

int main()
{
    FILE *fp;
    struct person p;
    fp = fopen("persons.bin", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }
    while (fread(&p, sizeof(p), 1, fp))
    {
        if (p.age > 30)
        {
            printf("Name: %s\n", p.name);
            printf("Address: %s\n", p.address);
        }
    }
    fclose(fp);
    
   
   
   getch();
   return 0;
}