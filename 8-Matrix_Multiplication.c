#include <stdio.h>

int main()
{
   int m = 3, n = 3;
   int matrix1[3][3], matrix2[3][3], ansMatrix[3][3]={0};
   printf("Enter matrix: \n");
   for (int i = 0; i < m; i++)
   {

      for (int j = 0; j < n; j++)
      {
         scanf("%d", &matrix1[i][j]);
      }
   }

   for (int i = 0; i < m; i++)
   {

      for (int j = 0; j < n; j++)
      {
         matrix2[i][j]=matrix1[j][i];
      }
   }

   for(int i=0;i<n;i++)
   {
      for(int k=0;k<n;k++)
      {
         for(int j=0;j<n;j++)
         {
            ansMatrix[i][k] +=matrix1[i][j]*matrix2[j][k];
         }
      }
   }
   

   printf("\n");


   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         printf("%d ", ansMatrix[i][j]);
      }
      printf("\n");
   }

   return 0;
}