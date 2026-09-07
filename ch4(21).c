#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number of table :");
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}


/*
output
Enter any number of table :1
1 X 10 = 10
1 X 9 = 9
1 X 8 = 8
1 X 7 = 7
1 X 6 = 6
1 X 5 = 5
1 X 4 = 4
1 X 3 = 3
1 X 2 = 2
1 X 1 = 1
*/