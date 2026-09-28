#include <stdio.h>

int Factorial(int n);

int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d", &n);

    printf("The number is %d and factorial is :%d", n, Factorial(n));

    return 0;
}





/*
output
Enter any number of n :5
The number is 5 and factorial is :120
*/