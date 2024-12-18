// Program to count characters, spaces, tabs, newline
#include <stdio.h>

int main()
{
    FILE *f1;
    f1 = fopen("20-Read_characters.c", "r");
    int noc = 0, tab = 0, space = 0, newLine = 1;
    char ch;
    while (1)
    {
        ch = fgetc(f1);

        if (ch == EOF)
        {
            break;
        }

        if (ch == ' ')
        {
            space++;
        }

        if (ch=='\t')
        {
            tab++;
        }

        if (ch == '\n')
        {
            newLine++;
        }

        noc++; // increase character count
    }

    printf("No of characters = %d \n", noc);
    printf("No of spaces = %d \n", space);
    printf("No of tabs = %d \n",tab);
    printf("No of new_lines = %d \n",newLine);

    fclose(f1);

    return 0;
}