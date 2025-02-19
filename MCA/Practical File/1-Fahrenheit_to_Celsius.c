// Input temperature in Fahrenheit and convert it into Degree Celsius
#include <stdio.h>
#include <conio.h>

int main()
{
   float tempF, tempC;
   printf("Enter the temp in F: ");
   scanf("%f", &tempF);
   tempC = (tempF - 32) * 5 / 9;
   printf("Temp is %.2f C", tempC);

   getch();
   return 0;
}