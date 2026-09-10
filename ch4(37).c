#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    printf("Enter any number of table :");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        sum +=(n*i);
    }

    printf("Your table is %d and sum is : %d",n,sum);
    

    return 0;
}



/*
output
Enter any number of table :5
Your table is 5 and sum is : 275
*/