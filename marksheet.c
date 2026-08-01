#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 struct student
 {
  int rn,m[5],t;
  char name[10];
 } s[10];
 printf("enter n:");
 scanf("%d", &n);

 for(i=0;i<n;i++)
 {
  printf("\n enter rn,name");
  scanf("%d %s",&s[i].rn,s[i].name);
  s[i].t=0;
  for(j=0;j<5;j++)
  {
   printf("\n enter m[%d]",j+1);
   scanf("%d",&s[i].m[j]);
   s[i].t+=s[i].m[j];
  }
 }
 for(i=0;i<n;i++)
 {
  if((s[i]. t/5) >70)
  {
   printf("\n rn,name");
   printf("%d %s",s[i].rn,s[i].name);
   for(j=0;j<5;j++)
   {
    printf("\n m[%d]",j+1);
    printf("%d",s[i].m[j]);
   }
   printf("\n total %d per %.2f",s[i].t,(float) s[i].t/5);
  }
 }
 getch();
}


/*output
enter n:1

 enter rn,name 1 fenil

 enter m[1] 44

 enter m[2] 55

 enter m[3] 66

 enter m[4] 77

 enter m[5] 88
 
*/