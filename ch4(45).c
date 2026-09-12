#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 1)
    {
        if (n % 2 == 0)
            printf("%d is Even", n);
        else
            printf("%d is Odd", n);

        i++;
    }

    return 0;
}



/*
output
Enter a number: 5
5 is Odd
*/