// Print Fibonacci series up to 10 terms using recursive function
// Created by Shailav Malik
#include <stdio.h>
#include <conio.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n)
{
   int static n1=0, n2=1, n3;
    if(n>0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        printFibonacci(n-1);
    }
    

}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("0 1 ");
    printFibonacci(n-2);
   
   
   getch();
   return 0;
}