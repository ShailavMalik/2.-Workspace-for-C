#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    if (fptr == NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    char ch;
    while (1)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}