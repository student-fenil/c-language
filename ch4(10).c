#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("This number is :%d\n", i);
    }

    return 0;
}


/*
output
Enter any number of n :3
This number is :3
This number is :2
This number is :1
*/