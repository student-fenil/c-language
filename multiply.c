#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],mul[3][3],i,j,k;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("enter the second matrix element=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("multiply of the matrix=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   mul[i][j]=0;
   for(k=0;k<3;k++)
   {
    mul[i][j]=0;
    for(k=0;k<3;k++)
    {
     mul[i][j]+=a[i][k]*b[k][j];
    }
  }
  }
  //for printing result
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d\t",mul[i][j]);
   }
   printf("\n");
  }
 }
  getch();
}