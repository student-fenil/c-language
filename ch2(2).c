#include <stdio.h>

int main()
{
    int a = 9999;
    int b = 1;
    int c = a + b;

    printf("The valuse of a is :%d \nThe valuse of b is :%d \nThe the sum is : %d", a, b, c);
    // Modulus operator is  used to get the remainder
    printf(" \nThe remainder when a is divided by b is : %d", a % b);

    // This does not work for exponentiation in c
    // int d=a^b;

    return 0;
}



/*output
The valuse of a is :9999 
The valuse of b is :1 
The the sum is : 10000 
The remainder when a is divided by b is : 0
*/