#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("Enter any number of table :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("Your number is %d and factorial is :%d\n", n, product);
    
    return 0;
}


/*
output
Enter any number of table :5
Your number is 5 and factorial is :120
*/