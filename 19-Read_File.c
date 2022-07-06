// Program to read a file using fgetc
#include <stdio.h>

int main()
{
    FILE *f1;                    // f1 is a pointer of type FILE
    f1 = fopen("file.txt", "r"); // f1 pointer now points to 'file'
    char ch;

    while (1)
    {
        ch = fgetc(f1);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }

    // we can also use feof() instead of EOF
    /* while (1)
     {
         if (feof(f1))
             break;
         ch = fgetc(f1);
         printf("%c", ch);
     } */

    fclose(f1); // close file f1

    return 0;
}