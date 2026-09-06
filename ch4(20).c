#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number of n :");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}

/*
output
Enter any number of n :5
5
4
3
2
1
*/