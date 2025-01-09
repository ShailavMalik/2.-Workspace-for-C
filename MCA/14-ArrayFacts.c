// Sure! Here are some interesting and lesser-known facts about arrays in C:

// Array Name as Pointer: The name of an array acts as a pointer to the first element of the array. However, it is not a modifiable lvalue, meaning you cannot change it to point to something else.

// Pointer Arithmetic: You can perform pointer arithmetic on array pointers. For example, arr + 1 points to the second element of the array.

// Array Decay: When you pass an array to a function, it decays to a pointer to its first element. This means the function receives a pointer, not the entire array.

// Multidimensional Arrays: C supports multidimensional arrays, such as 2D arrays (int arr[3][4]). These are stored in row-major order, meaning elements of each row are stored contiguously.

// Sizeof Operator: The sizeof operator can be used to determine the size of an array in bytes. For example, sizeof(arr) gives the total size of the array, while sizeof(arr[0]) gives the size of one element.

// Flexible Array Members: In structures, you can have flexible array members, which are arrays without a specified size. This is useful for creating structures with variable-length arrays.

// Array Initialization: You can partially initialize arrays. Uninitialized elements are set to zero for static and global arrays, but remain uninitialized for local arrays.

// String Literals: String literals in C are arrays of characters terminated by a null character ('\0'). For example, "hello" is an array of 6 characters ('h', 'e', 'l', 'l', 'o', '\0').

// Pointer to Array: You can have pointers to entire arrays, not just to individual elements. For example, int (*ptr)[5] is a pointer to an array of 5 integers.

// Array of Pointers: You can create arrays of pointers. For example, char *arr[3] is an array of 3 pointers to char.
#include <stdio.h>

// Function to demonstrate array decay
void printArray(int *arr, int size)
{
   for (int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

int main()
{
   // Array name as pointer
   int arr[5] = {1, 2, 3, 4, 5};
   printf("Base address of arr: %p\n", (void *)arr);
   printf("Address of arr[0]: %p\n", (void *)&arr[0]);

   // Pointer arithmetic
   printf("Address of arr[1]: %p\n", (void *)(arr + 1));
   printf("Value of arr[1]: %d\n", *(arr + 1));

   // Array decay
   printArray(arr, 5);

   // Multidimensional array
   int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
   printf("Element at matrix[1][2]: %d\n", matrix[1][2]);

   // Sizeof operator
   printf("Size of arr: %zu bytes\n", sizeof(arr));
   printf("Size of arr[0]: %zu bytes\n", sizeof(arr[0]));

   // Flexible array member
   struct FlexArray
   {
      int size;
      int data[];
   };
   struct FlexArray *fa = malloc(sizeof(struct FlexArray) + 5 * sizeof(int));
   fa->size = 5;
   for (int i = 0; i < 5; i++)
   {
      fa->data[i] = i + 1;
   }
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", fa->data[i]);
   }
   printf("\n");
   free(fa);

   // String literal
   char str[] = "hello";
   printf("String: %s\n", str);

   // Pointer to array
   int(*ptr)[5] = &arr;
   printf("First element via ptr: %d\n", (*ptr)[0]);

   // Array of pointers
   char *strArr[3] = {"one", "two", "three"};
   for (int i = 0; i < 3; i++)
   {
      printf("%s ", strArr[i]);
   }
   printf("\n");

   return 0;
}