#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int i = 1;
    printf("Enter any number of n :");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }

    if (count == 2)
    {
        printf("%d is not composite \n", n);
    }
    else
    {
        printf( "%d is composite \n", n);
    }

    return 0;
}




/*
output
Enter any number of n :5
5 is not composite 
*/