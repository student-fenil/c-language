#include <stdio.h>

int reverse(int n);

int reverse(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return ((n % 10) * (n/10)) + reverse(n / 10);
    }
}
int main()
{
    int n;
    printf("Enter any number n: ");
    scanf("%d", &n);

    printf("%d",reverse(n));

    return 0;
}










/*
output
Enter any number n: 5
1
*/