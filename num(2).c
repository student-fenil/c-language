//with argument with return value
#include<stdio.h>
#include<conio.h>
int square(int);

void main()
{
 int n,result;
 printf("enter a number:");
 scanf("square=%d",&n);

 result=square(n);
 printf("square=%d",result);
 getch();
}
 int square(int x)
 {
  return x*x;
 }


 /*output
 enter a number:1
square=0
*/