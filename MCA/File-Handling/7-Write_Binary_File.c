// program to write a binary file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    char name[20];
    char address[30];
    int age;
};

int main()
{
    struct person p;
    strcpy(p.name, "Shailav Malik");
    strcpy(p.address, "Shamli");
    p.age = 21;
    FILE *fp = fopen("file.bin", "wb");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return 1;
    }

    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);
    printf("File is written successfully");

    return 0;
}