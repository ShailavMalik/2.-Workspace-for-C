// Create a structure named Complex to represent a complex number with real 
// and imaginary parts & write program to add and multiply two complex numbers.
#include <stdio.h>
#include <conio.h>

struct Complex
{
    float real;
    float imag;
};

int main()
{
    struct Complex a, b, sum, mul;
    a.real = 1;
    a.imag = 3;
    b.real = 5;
    b.imag = 7;

    // Calculate the sum of a and b
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    // Calculate the product of a and b
    mul.real = a.real * b.real - a.imag * b.imag;
    mul.imag = a.real * b.imag + a.imag * b.real;

    // Print the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product: %.2f + %.2fi\n", mul.real, mul.imag);
   
   
   getch();
   return 0;
}