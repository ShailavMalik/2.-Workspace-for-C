#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("file.txt", "a");
    if (fp == NULL)
    {
        printf("Error in opening file");
        return 1;
    }

    printf("Enter the contents: ");
    char st[50];
    fgets(st, sizeof(st), stdin);
    fprintf(fp,"%s",st);

    fclose(fp);

    return 0;
}