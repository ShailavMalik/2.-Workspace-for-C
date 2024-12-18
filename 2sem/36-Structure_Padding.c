#include <stdio.h>

typedef struct demo
{
    char ch;
    char c;

    int a;

    char e;

} demo;

int main()
{
    printf("%d", sizeof(demo));

    return 0;
}