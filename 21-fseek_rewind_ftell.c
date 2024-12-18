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

    fseek(fp, 5, SEEK_SET);
    char ch = getc(fp);
    printf("%c\n", ch);
    printf("%d", ftell(fp));

    fclose(fp);

    return 0;
}