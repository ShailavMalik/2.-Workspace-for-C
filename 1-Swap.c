#include <stdio.h>

int main()
{
    //Swaping two numbers without using third variable
    int a,b;   // a=4 , b=6
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    printf("The value of a is %d and value of b is %d \n",a,b);
    a=a+b;  // a=10
    b=a-b;  // b=10-6=4
    a=a-b;  // a=10-4=6
    printf("After Swap the value of a is %d and value of b is %d",a,b);


    
    return 0;
}