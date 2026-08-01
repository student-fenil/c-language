#include<stdio.h>
int max(int a,int b,int c)
{
 if(a>=b && a>=c)
	return a;
 else if(b>=a && b>=c)
	return b;
 else
	return c;
}
 int main()
 {
  int a,b,c,result;
  printf("enter three numbers:");
  scanf("%d %d %d",&a,&b,&c);

  result=max(a,b,c);
  printf("maximum number=%d",result);
  return 0;
 }


 /*output
 enter three numbers: 4
4
5
maximum number=5
*/