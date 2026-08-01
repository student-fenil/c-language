#include<stdio.h>
#include<conio.h>
int main()
{
 int a[3][3],i,j,count=0;
 int s;

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("enter value search");
 scanf("%d",&s);

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(a[i][j]==s)
   {
    count++;
   }
  }
 }
 printf("%d has %d time ",s,count);
 getch();
}

/*output
enter value search6422476 has 0 time 
*/