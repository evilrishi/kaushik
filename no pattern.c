#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
       int s=0;
      for (j = 1; j <= i; ++j)
      {
         printf("%d ", j);
         s=s+j;
      }
       printf("%d ", s);
      printf("\n");
   }
   return 0;
}

