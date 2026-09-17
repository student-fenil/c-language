#include<stdio.h>

int main()
{
    int product=1;
    int n;
    printf("Enter any number of n :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is :%d",product);

    return 0;
}



/*
output
Enter any number of n :5
The factorial is :120
*/