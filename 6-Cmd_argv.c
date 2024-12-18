// command line arguements are entered after a executable file
#include <stdio.h>

int main(int argc, char **argv)
{
    // argc ---> arguement count
    // argv ---> arguement value
    printf("No of arguements passed = %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}