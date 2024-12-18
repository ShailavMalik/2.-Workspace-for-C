#include <stdio.h>
#include <string.h>

struct student
{
   int roll;
   int erpId;
   char name[50];
   char branch[50];
};

void printStruct(struct student s)
{
   printf("roll = %d\n", s.roll);
   printf("erpId = %d\n", s.erpId);
   printf("name = %s\n", s.name);
   printf("branch = %s\n", s.branch);
}

int main()
{
   struct student s1 = {34, 9305, "Shailav", "CS"};
   printStruct(s1);
   // pointer to structure
   struct student *structPointer;
   structPointer = &s1;
   printf("\n%d", structPointer->erpId);

   return 0;
}