// Count no of characters, tabs,spaces, lines
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("32.c", "r");
    if (ptr == NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    int noc = 0, not = 0, nos = 0, nol = 0;
    while (1)
    {
        char ch = fgetc(ptr);
        if (ch == EOF)
            break;
        noc++;
        if (ch == '\t')
            not ++;
        if (ch == ' ')
            nos++;
        if (ch == '\n')
            nol++;
        
    }

    printf("No of characters = %d\n", noc);
    printf("No of spaces = %d\n", nos);
    printf("No of tabs = %d\n", not );
    printf("No of lines = %d\n", nol );


    return 0;
}