#include<stdio.h>

int main()
{
    int i=1;
    int sum=0;

    while (i<=9)
    {
        sum = sum + i;
        i=i+2;
    }

    printf("The sum of odd numbers is :%d\n",sum);

    return 0;
}


/*
output
The sum of odd numbers is :25
*/