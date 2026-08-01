#include<stdio.h>
float area(float r)
{
 return 3.14*r*r;
}
 int main()
 {
  float radius,result;
  printf("\n enter radius:");
  scanf("%f",&radius);

  result=area(radius);
  printf("area of circle=%.2f",result);
  return 0;
 }



 /*output
 enter radius:10
area of circle=314.00
*/