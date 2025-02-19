// Input three angles of a triangle and check whether the triangle is valid or not
#include <stdio.h>
#include <conio.h>

int main()
{
   int x, y, z;
   printf("Enter the angles of triangle in degrees: ");
   scanf("%d %d %d", &x, &y, &z);
   if (x + y + z == 180)
      printf("The triangle is valid");
   else
      printf("The triangle is not valid");

   getch();
   return 0;
}