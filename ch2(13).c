#include <stdio.h>

int main()
{
    int a, b;

    printf(" \n The value of a is :");
    scanf("%d", &a);

    printf(" \n %d", a % 5);

    printf(" \n The value of b is :");
    scanf("%d", &b);

    printf(" \n %d", b % 10);

    return 0;
}


/*
output
The value of a is :10
 
 0 
 The value of b is :20
 
 0
 */