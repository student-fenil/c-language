#include <stdio.h>

int main()
{
    int count=0;
    int n, i = 1;
    printf("Enter any number of table :");
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
        printf("%d is prime number\n", n);
        
    } else {

        printf("%d is not prime number\n", n);
    }
    
    return 0;
}


/*
output
Enter any number of table :5
5 is prime number
*/