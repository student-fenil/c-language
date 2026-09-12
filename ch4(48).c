#include <stdio.h>

int main()
{
    int count = 0;
    int n;
    int i, j;

    printf("Enter any number: ");
    scanf("%d", &n);

    i = 2;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (i % j == 0)
            {
                count++;
            }
            j++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}



/*
output
Enter any number: 5
9
*/