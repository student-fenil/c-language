#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,sum;
 int a[3][3];
 printf("\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    scanf("\n %d",&a[i][j]);
   // sum=sum+a[i][j];
  }
 }
 for(i=0;i<3;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
    printf("\t %d",a[i][j]);
 //   printf("\n sum of matrix:%d",sum);
  }
 }
 getch();
}