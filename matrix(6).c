#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3];
 int b[3][3];
 int i,j;

 printf("\n enter 2 matrix:-\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("\n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("%d",a[i][j]);
  }
 }
 printf("\n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("%d",b[i][j]);
  }
 }
 printf("\n");
 printf("addtion of two matrix");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("%d",a[i][j]+b[i][j]);
  }
 }
 printf("\n the transpose two matrix:-\n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("%d",a[j][i]);
  }
 }
 printf("\n");
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("%d",b[j][i]);
  }
 }
 getch();
}



/*output
 enter 2 matrix:-
1
2
3
4
5
6
7
8
9

1
2
3
4
5
6
7
8
9


123
456
789

123
456
789
addtion of two matrix
246
81012
141618
 the transpose two matrix:-

147
258
369

147
258
369
*/