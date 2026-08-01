#include<stdio.h>
int checkrange(int num)
{
 if(num>=10 && num<=50)
	return 1;
 else
	return 0;
}
 int main()
 {
  int n;
  printf("enter a number;");
  scanf("%d",&n);
  if(checkrange(n))
	printf("number is between 10 and 50\n");
  else
	printf("number is not between 10 and 50\n");
  return 0;
}


/*output
enter a number;1
number is not between 10 and 50
*/