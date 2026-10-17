#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // sum_natural(n)=1+2+3+4+5+......+n-1+n;
    // sum_natural(n)=sum(n-1)+1;

    return sum_natural(n - 1) + n;
}
int main()
{
    float j;
    printf("Enter any number of j :");
    scanf("%f", &j);

    printf("The sum of frist natural number is :%d", sum_natural(j));

    return 0;
}





/*
output
Enter any number of j :5
The sum of frist natural number is :15
*/