// Define a structure named "Date" with members day, month, and year &
// input two dates and find the difference in days between them.
#include <stdio.h>
#include <conio.h>

typedef struct Date
{
    int day;
    int month;
    int year;
}Date;

int main()
{
    Date d1, d2;
    int days1, days2, diff;
    printf("Enter the first date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d1.day, &d1.month, &d1.year);
    printf("Enter the second date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d2.day, &d2.month, &d2.year);
    days1 = d1.year * 365 + d1.month * 30 + d1.day;
    days2 = d2.year * 365 + d2.month * 30 + d2.day;
    diff = days1 - days2;
    printf("Difference in days between the two dates is %d days.", diff);
   
   
   getch();
   return 0;
}