#include <stdio.h>

int main()
{
    int count=0;
    int n;
    printf("Enter any numbe :");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
    }
    printf("%d \n", count);

    return 0;
}



/*
output
Enter any numbe :5
9 
*/