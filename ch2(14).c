#include <stdio.h>

int main()
{
    int x, y;

    printf(" \n The value of x is :");
    scanf("%d", &x);

    printf(" \n %d", x % 3);

    printf(" \n The value of y is :");
    scanf("%d", &y);

    printf(" \n %d", y % 7);

    return 0;
}


/*
output
 The value of x is :10
 
 1 
 The value of y is :20
 
 6
 */