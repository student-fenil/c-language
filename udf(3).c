#include<stdio.h>
#include<conio.h>
int temp(int,int); // fun with no argument but return value
void main()
{
 int m;
 int a=5,b=10;
 m=temp(a,b);
 printf("%d",m);
 getch();
}

 int temp(int p,int q)
 {
  int c=p+q;
  return(c);
 }


 /*
 output
 15*/