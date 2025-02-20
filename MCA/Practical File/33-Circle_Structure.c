// Define a Circle structure with a radius. Write a C program to
// calculate and display the area and perimeter of two circles
#include <stdio.h>
#include <conio.h>

typedef struct Circle
{
    float radius;
} Circle;

int main()
{
    Circle c;
    float perimeter, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &c.radius);
    perimeter = 2 * 3.14 * c.radius;
    area = 3.14 * c.radius * c.radius;
    printf("Perimeter of the circle is: %.2f\n", perimeter);
    printf("Area of the circle is: %.2f\n", area);

    getch();
    return 0;
}