#include <iostream>
#pragma pack(1)
using namespace std;

class demo
{
   public:
   char c;
   int num;
};
 
int main() 
{
    printf("%d",sizeof(demo));
 
    return 0; 
}