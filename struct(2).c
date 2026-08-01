#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 int per;
}t[5]; //array of structure
 void main()
 {
  int i;
  for(i=0;i<2;i++)
  {
   scanf("%d",&t[i].rno);
   scanf("\n %s",t[i].name);
   scanf("\n %d",&t[i].per);
  }
  printf("\n all records \n");
  for(i=0;i<2;i++)
  {
   printf("\n %d",t[i].rno);
   printf("\t %d",t[i].name);
   printf("\t %d",t[i].per);
  }
  printf("\n filter rec whose per>65\n");
  for(i=0;i<2;i++)
  {
   if(t[i].per>=65)
   {
    printf("\n %d",t[i].rno);
    printf("\t %s",t[i].name);
    printf("\t %s",t[i].per);
   }
  }
}
