// program to read a binary file
#include <stdio.h>

struct person
{
    char name[20];
    char address[30];
    int age;
};

int main()
{
    struct person p;
    FILE *fptr = fopen("file.bin", "rb");
    if (fptr == NULL)
    {
        printf("Error in opening file");
        return 1;
    }

    fread(&p, sizeof(p), 1, fptr);
    printf("Name:%s\nAddress:%s\nAge:%d", p.name, p.address, p.age);
    fclose(fptr);

    return 0;
}