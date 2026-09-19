#include <stdio.h>

int maximum(int a, int b, int c);

int maximum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("The maximum number is :%d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("The maximum number is :%d\n", b);
    }
    else
    {
        printf("The maximum number is :%d\n", c);
    }
    return 0;
}
int main()
{
    int a, b, c;
    printf("Enter any number of a :");
    scanf("%d", &a);
    printf("Enter any number of b :");
    scanf("%d", &b);
    printf("Enter any number of c :");
    scanf("%d", &c);

    maximum(a,b,c);

    return 0;
}




/*
output
Enter any number of a :5
Enter any number of b :6
Enter any number of c :7
The maximum number is :7
*/