#include<stdio.h>

int main()
{
    int sum=0;

    for (int i = 1; i <= 10; i++)
    {
        sum +=(12*i);
    }

    printf("The sum of the table of 12 is %d",sum);
    

    return 0;
}



/*
output
The sum of the table of 12 is 660
*/