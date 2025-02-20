// Enter two dates in dd-mm-yy format. Write a program to calculate the difference in days
#include <stdio.h>
#include <conio.h>

int dateDifference(int d1, int m1, int y1, int d2, int m2, int y2)
{
   int days1 = y1*365 + m1*30 + d1;
   int days2 = y2*365 + m2*30 + d2;
   return days2 - days1;
}

int main()
{
    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date in dd-mm-yy format: ");
    scanf("%d-%d-%d", &d1, &m1, &y1);
    printf("Enter second date in dd-mm-yy format: ");
    scanf("%d-%d-%d", &d2, &m2, &y2);
    printf("Difference in days: %d", dateDifference(d1, m1, y1, d2, m2, y2));
   
   
   getch();
   return 0;
}