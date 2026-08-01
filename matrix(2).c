#include<stdio.h>
#include<conio.h>
//wp intialize 3*3 matix print in matrix format
void main()
{
 int i,j;
 int a[3][3]={1,2,3,4,5,6,7,8,9}; //2d intilaize

 printf("\n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",a[i][j]);
  }
 }
 getch();
}


/*output
         1       2       3
         4       5       6
         7       8       9
*/