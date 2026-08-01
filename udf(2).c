#include<stdio.h>
#include<conio.h>
int temp(); // fun with no argument but return value

void main()
{
 int m;
 m=temp();
 printf("%d",m);
 getch();
}

 int temp()
 {
  int c=7;
  return(c);
 }

 /*output
 7
 
 */