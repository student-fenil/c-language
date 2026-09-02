#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("The number is :%d\n",i);
    }
    
    return 0;
}


/*
output
Enter any number of n :3
The number is :1
The number is :2
The number is :3
*/