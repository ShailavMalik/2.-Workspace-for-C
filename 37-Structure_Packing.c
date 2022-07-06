#include <stdio.h>
#pragma pack(1)

union demo
{
    char ch;
    int num;
    double a;
};

int main()
{
    printf("%d",sizeof(union demo));

    return 0;
}