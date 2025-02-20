// Calculate and print roots of a quadratic equation . The coefficients of quadratic 
// equations a, b, c are received as parameters
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
   float a, b, c, d, x1, x2;
   printf("Enter a, b, c: ");
   scanf("%f%f%f", &a, &b, &c);
   d = b * b - 4 * a * c;
   if (d < 0)
   {
      printf("Roots are imaginary\n");
   }
   else
   {
      x1 = (-b + sqrt(d)) / (2 * a);
      x2 = (-b - sqrt(d)) / (2 * a);
      printf("Roots are %.2f and %.2f\n", x1, x2);
   }
   
   
   getch();
   return 0;
}