#include<stdio.h>

int main()
{
    int n=20;
    int i=1;
    int sum=0;
   
    while (i<=n)
    {
        sum+=i;
        i++;
    }

    printf("The sum of n natural numbers is :%d\n",sum);

    return 0;
}



/*
output
The sum of n natural numbers is :210
*/