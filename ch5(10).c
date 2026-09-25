#include <stdio.h>

int digit(int a);

int digit(int a)
{
    int digit, sum = 0;

    for (int i = 1; a != 0; i++)
    {
        digit = a % 10;
        sum += digit;
        a = a / 10;
    }

    return sum;
}
int main()
{
    int a;
    printf("Enter any number of a :");
    scanf("%d", &a);

    printf("The sum of this digit is :%d", digit(a));

    return 0;
}




/*
output
Enter any number of a :5
The sum of this digit is :5
*/