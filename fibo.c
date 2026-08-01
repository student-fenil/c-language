#include<stdio.h>
#include<conio.h>
void fibo_prn(int n)
{
 int a=0,b=1,c,i;
 printf("fibonacci series:\n");

 for(i=1;i<=n;i++)
 {
  printf("%d",a);
  c=a+b;
  a=b;
  b=c;
 }
}
  int main()
  {
   int n;
   printf("enter number of element:");
   scanf("%d",&n);
   fibo_prn(n);
   return 0;
  }
/*output
enter number of element: 3  
fibonacci series:
011
*/