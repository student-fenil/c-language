#include<stdio.h>

int main()
{
    int n;
    int i=1;
    int sum=0;
    printf("Enter any number of table :");
    scanf("%d", &n);

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
Enter any number of table :2
The sum of n natural numbers is :3
*/