#include <stdio.h>

int main()
{
    int N;
    printf("Upto which number you want to print prime: ");
    scanf("%d", &N);
    if (N >= 2)
    {
        printf("Prime numbers from 1 to %d are 2, ", N);
    }
    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (i % j != 0 && j == (i - 1))
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}