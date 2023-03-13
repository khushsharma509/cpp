// #include<stdio.h>
// int main()
// { int n,m;
//   scanf("%d",&n);
//   scanf("%d",&m);
    
//     for(int i=1;i>=n;i++)
//     {for(int j=1;i>=m;j++){printf("* ");}}
   
//    return 0;
// }
#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}