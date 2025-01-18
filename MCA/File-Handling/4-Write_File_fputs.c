#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("file.txt", "w");
    if (file == NULL)
    {
        printf("Error in opening file");
        return 1;
    }
    printf("Enter the contents: ");
    char st[40];
    fgets(st, sizefo(st), stdin);
    fputs(st, file);

    return 0;
}