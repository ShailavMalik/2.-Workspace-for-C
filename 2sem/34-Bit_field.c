#include <stdio.h>

struct date
{
   unsigned int d : 5;
   unsigned int m : 4;
   unsigned int y;
};

int main()
{
   printf("%d\n", sizeof(struct date));
   struct date exam = {31, 7, 2022};
   printf("exam date is %d/%d/%d ", exam.d, exam.m, exam.y);

   return 0;
}