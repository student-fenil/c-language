#include<stdio.h>
#include<conio.h>
void fun1()
{
  printf("fenil");
}
void fun2(int a,int b)
{
  printf("%d",a+b);
}
float fun3()
{
  return(2.5);
}
int fun4(int a,int b)
{
  return(a*b);
}
void main()
{
 float k;
 int m;
 fun1();
 fun2(5,10);
 k=fun3();
 printf("\n float is %d",k);
 m=fun4(2,3);
 printf("\n product of 2 value is :",m);
 getch();
}


/*output
fenil15
 float is 0
 product of 2 value is :
 */