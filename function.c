#include<stdio.h>
#include<conio.h>
int addnumbers(int a,int b); //function declaration
 void main()
 {
  int n1,n2,sum;
  printf("enter two numbers:");
  scanf("%d%d",&n1,&n2);

  sum=addnumbers(n1,n2); //function call
  printf("sum=%d",sum);
 }
 int addnumbers(int a,int b) //function definition
 {
  int result;
  result=a+b;
  return result;  //return statement
 }


 
 /*output
 enter two numbers: 1 2
sum=3 
*/