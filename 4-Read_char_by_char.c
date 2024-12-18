// Reading a file character by character
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("new.txt", "r");

    if (fptr == NULL)
    {
        printf("Error in opening file");
        return -1;
    }

    char ch;
    while (1)
    {
        ch = fgetc(fptr);
        if (feof(fptr))
            break;
        printf("%c", ch);
    }

    return 0;
}