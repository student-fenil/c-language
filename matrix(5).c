#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 int a[3][3]={1,2,3,4,5,6,7,8,9};
 int b[3][3]={1,2,3,4,5,6,7,8,9};
 printf("\n");
 printf("\n first matrix \n");

 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",a[i][j]);
  }
 }

 printf("\n transpose matrix \n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",a[j][i]);
  }
 }

 printf("\n second matrix \n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",b[i][j]);
  }
 }

 printf("\n addition of two matrix \n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",a[i][j]+b[i][j]);
  }
 }
 getch();
}


/*output

first matrix 

         1       2       3
         4       5       6
         7       8       9
 transpose matrix 

         1       4       7
         2       5       8
         3       6       9
 second matrix 

         1       2       3
         4       5       6
         7       8       9
 addition of two matrix 

         2       4       6
         8       10      12
         14      16      18

         */
