#include<stdio.h>

int main()
{
    int n=50;
    int i=1;
    int sum=0;
    
    while (i<=n)
    {
        sum+=i;
        i++;
    }

    printf("The sum of 50 natural numbers is :%d\n",sum);

    return 0;
}



/*
output
The sum of 50 natural numbers is :1275
*/