#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("16-Count_Char.c", "r");

    if (fp == NULL)
    {
        printf("Error in opening file");
        return -1;
    }
    int count = 0;

    while (1)
    {
        if (feof(fp))
            break;

        fgetc(fp);
        count++;
    }

    printf("No of characters are %d", count);

    return 0;
}