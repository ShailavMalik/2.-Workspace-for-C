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
    char st[50];
    // fgets consider a string until a new line character is found
    while ((fgets(st, 50, fptr)) != NULL)
    {
        printf("%s", st);
    }

    fclose(fptr);

    return 0;
}