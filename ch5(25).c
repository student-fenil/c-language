#include <stdio.h>

int number(int n);

int number(int n)
{
    if (n == 0)
        return 1;

    number(n - 1);
    printf("%d\n", n);

    return 0;
}

int main()
{
    int n;
    printf("Enter any number n: ");
    scanf("%d", &n);

    number(n);

    return 0;
}







/*
output
Enter any number n: 5
1
2
3
4
5
*/
