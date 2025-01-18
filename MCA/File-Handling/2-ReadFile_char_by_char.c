#include <stdio.h>
#include <stdlib.h>

int main()
{ // FILE is buffer pointer which stores address of the file                                                                                                                                                                                                                                                                                                                                           f
    FILE *fptr = fopen("new.txt", "r");
    if (fptr == NULL)
    {
        printf("Error in opening file");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}