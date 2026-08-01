#include<stdio.h>
#include<conio.h>
void main()
{
 //wp to intialize 3*3 matrix print in matrix format
  int i,j;
  char name[5][10];
  printf("\n");

  for(i=0;i<3;i++)
  {
   scanf("\n %s",&name[i]);
  }
  for(i=0;i<3;i++)
  {
   printf("\n %s",name[i]);
  }
  getch();
}