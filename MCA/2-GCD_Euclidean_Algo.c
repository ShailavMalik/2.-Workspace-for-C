// Euclidean Algorithm for finding gcd of two numbers
#include <stdio.h>

// int findGcd(int a, int b)
// {
//    int num1, num2, ans;
//    num1 = (a < b) ? a : b; // num1 is the smaller one
//    num2 = (b < a) ? a : b; // num2 is the bigger one
//    int r = num2 % num1;
//    ans = num1; // in case r is zero in starting so while loop will not be executed
//    while (r > 0)
//    {
//       ans = r; // store 'r' in a variable so that we can just previous value of r when it gets zero
//       r = num2%num1;
//       num1=r;
//    }
//    return ans;
// }

int findGcd(int a, int b)
{
   if (a == 0)
      return b;
   return findGcd(b % a, b);
}

int main()
{
   int ans = findGcd(54, 6);
   printf("%d", ans);

   return 0;
}