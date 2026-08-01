#include<stdio.h>
#include<conio.h>
int main()
{
 // wp to intialize 3*3 matrix print in matrix format
 int i,j;
 char name[3][10]={"hello","data","test"};
 printf("\n");

 for(i=0;i<3;i++)
 {
  printf("\n %s",name[i]);
 }
 /* for(j=0;name[i][j]!='\0';j++)
 {
  printf("%c",name[i][j]);
 } */
 getch();
}


/*output
hello
 data
 test
 */