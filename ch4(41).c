#include <stdio.h>

int main()
{
    int n;
    int not_composite = 0;
    printf("Enter any number of n :");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_composite = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_composite = 1;
                break;
            }
        }
    }
    if (not_composite)
    {
        printf("%d is composite \n", n);
    }
    else
    {
        printf("%d is not composite \n", n);
    }

    return 0;
}



/*
output
Enter any number of n :5
5 is not composite */
