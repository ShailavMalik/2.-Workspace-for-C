// Write a program to copy one file to another. It should take file names from the
// user and refuse to copy if the target file already exists
#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *source, *target;
    char source_file[30], target_file[30], ch;
    printf("Enter the source file name: ");
    gets(source_file);
    printf("Enter the target file name: ");
    gets(target_file);
    source = fopen(source_file, "r");
    if (source == NULL)
    {
        printf("Source file not found\n");
        getch();
        return 0;
    }
    // check if target file already exists
    target = fopen(target_file, "r");
    if (target != NULL)
    {
        printf("Target file already exists\n");
        fclose(target);
        getch();
        return 0;
    }

    target = fopen(target_file, "w");
    if (target == NULL)
    {
        printf("Error in creating target file\n");
        fclose(source);
        getch();
        return 0;
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }
    printf("File copied successfully\n");
    fclose(source);
    fclose(target);

    getch();
    return 0;
}