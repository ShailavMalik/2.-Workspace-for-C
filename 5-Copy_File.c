#include <stdio.h>

int main()
{
    FILE *fptr1 = fopen("new.txt", "w");       // copy file
    FILE *fptr2 = fopen("5-Copy_File.c", "r"); // source file

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error in opening file");
        return -1;
    }

    while (1)
    {
        if (feof(fptr2))
            break;
        char ch = fgetc(fptr2);
        fputc(ch, fptr1);
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}