#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 1; i++)
    {
        if (n % 2 == 0)
            printf("%d is Even", n);
        else
            printf("%d is Odd", n);
    }

    return 0;
}



/*
output
Enter a number: 5
5 is Odd
*/