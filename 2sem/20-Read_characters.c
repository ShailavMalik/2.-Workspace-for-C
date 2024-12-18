// read characters from file by fscanf()
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("file.txt", "r"); 
    char ch;
    char s[20];

    while (1)
    {
        if (feof(fp))
            break;
        fscanf(fp, "%c", &ch);
        printf("%c",ch);
    }

    fclose(fp);

    return 0;
}