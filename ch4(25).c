#include<stdio.h>

int main()
{
    int i=2;
    int sum=0;

    while (i<=10)
    {
        sum+=i;
        i=i+2;
    }

    printf("The sum of even numbers is :%d\n",sum);

    return 0;
}


/*
output
The sum of even numbers is :30
*/