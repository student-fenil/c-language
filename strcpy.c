#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 char name[3][10]={"hello","data","test"};
 char name2[3][10];
 clrscr();
 printf("\n");

 for(i=0;i<3;i++)
 {
  strcpy(name2[i],name[i]);
 }
 //first array data

 for(i=0;i<3;i++)
 {
  printf("\n %s",name[i]);
 }
 //second array data
 for(i=0;i<3;i++)
 {
  printf("\n %s",name2[i]);
 }
 getch();
}
