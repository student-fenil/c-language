#include<stdio.h>
#include<conio.h>
 //udf(user define fuction)
 void temp(); //declration section
 void main()
 {
  
  temp(); //calling section
  getch();
 }

 //defination section
 void temp()
 {
  int i,s=0;
  for(i=1;i<=5;i++)
  {
   s=s+i;
  }
  printf("%d",s);
 }

/*output
15*/
