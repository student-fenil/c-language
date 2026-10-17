#include <stdio.h>

int fibonacci(int);

// 0,1,1,2,3,5,8,13,21,34,......
// fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// int fibonacci(int);
int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d", &n);

    printf("The value of fibonacci series at %d is :%d", n, fibonacci(n));

    return 0;
}





/*
output
Enter any number of n :5
The value of fibonacci series at 5 is :3
*/