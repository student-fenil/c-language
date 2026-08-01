//with argument no return value
#include<stdio.h>
#include<conio.h>
void add (int,int);

void main()
{
 int a,b;
 printf("enter two number");
 scanf("%d%d",&a,&b);
 add(a,b);
 getch();
}

 void add(int x,int y)
 {
 printf("sum=%d",x+y);
 }


 
 /*output
 enter two number 1 2
sum=3
*/