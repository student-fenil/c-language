#include <stdio.h>

// function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    printf("The sum is :%d\n", x + y);
    return x + y;
}

int main()
{
    int a = 5;
    int b = 5;

    // int c=a+b;
    // printf("The sum is :%d\n",c);
    sum(a, b);   // function call
    // int c=sum(a, b);
    // printf("%d\n",c);

    int a1 = 50;
    int b1 = 25;

    // int c1=a1+b1;
    // printf("The sum is :%d\n",c1);
    sum(a1, b1);   // function call

    int a2 = 90;
    int b2 = 9;

    // int c2=a2+b2;
    // printf("The sum is :%d\n",c2);
    sum(a2, b2);  // function call

    return 0;
}



/*
output
The sum is :10
The sum is :75
The sum is :99
*/