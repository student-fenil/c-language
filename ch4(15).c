#include <stdio.h>

int main()
{
    int n;
    int limit = 1;
    printf("Enter any number of table :");
    scanf("%d", &n);

    while (limit <= n)
    {
        printf("%d X %d = %d\n", n, limit, n * limit);
        limit ++;
    }

    return 0;
}


/*
output
Enter any number of table :
1
1 X 1 = 1
*/