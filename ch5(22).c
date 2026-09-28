#include <stdio.h>

int sum(int n);

int sum(int n)
{
    int s;
    if (n == 0 || n==1)
    {
        return 1;
    }
    else
    {
        return s = n + sum(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d", &n);

    printf("The sum of Natural Numbers is :%d", sum(n));

    return 0;
}





/*
output
Enter any number of n :5
The sum of Natural Numbers is :15
*/