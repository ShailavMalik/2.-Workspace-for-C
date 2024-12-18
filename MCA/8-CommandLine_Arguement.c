// program to show how arguements can be passed to main function
#include <stdio.h>

int main(int argc, char *argv[]) // argc is the arguement count i.e., arguements passed to main function
// char *argv[] is the array of strings
{
    printf("argc = %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s", i, argv[i]);
    }

    return 0;
}