#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter any number of a:");
    scanf("%d", &a);
    printf("Enter any number of b:");
    scanf("%d", &b);
    printf("Enter any number of c:");
    scanf("%d", &c);
    printf("Enter any number of d:");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d ", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d ", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest of all is %d ", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest of all is %d ", d);
    }

    return 0;
}



/*
output
Enter any number of a:5
Enter any number of b:6
Enter any number of c:7
Enter any number of d:8
The greatest of all is 8 
*/