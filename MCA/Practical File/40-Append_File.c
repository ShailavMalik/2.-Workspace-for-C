// Appends the contents of one file to another. Have the program
// take the filename from the user.
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *f1, *f2;
    char ch, filename[20];
    printf("Enter the filename to open for reading: ");
    gets(filename);
    f1 = fopen(filename, "r");
    if (f1 == NULL)
    {
        printf("Cannot open file %s for reading\n", filename);
        getch();
        return 1;
    }
    printf("Enter the filename to open for writing: ");
    gets(filename);
    f2 = fopen(filename, "a");
    if (f2 == NULL)
    {
        printf("Cannot open file %s for writing\n", filename);
        fclose(f1);
        getch();
        return 1;
    }
    while (1)
    {
        ch = fgetc(f1);
        if (ch == EOF)
            break;
        fputc(ch, f2);
    }
    printf("File appended successfully. \n");
    fclose(f1);
    fclose(f2);

    getch();
    return 0;
}