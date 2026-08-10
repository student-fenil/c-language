#include<stdio.h>

int main()
{
    int p, r,t;

    printf(" \n The value of p is :");
    scanf("%d", &p);

    printf(" \n %d", p % 2);

    printf(" \n The value of r is :");
    scanf("%d", &r);

    printf(" \n %d", r % 4);

    printf(" \n The value of t is :");
    scanf("%d", &t);

    printf(" \n %d", t % 10);


    return 0;
}



/*output
 The value of p is :10
 
 0 
 The value of r is :20
 
 0 
 The value of t is :30
 
 0
*/