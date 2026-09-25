#include <stdio.h>

int number(int a);

int number(int a)
{
    if (a % 2 == 0)
    {
        printf("This number is even number");
    }
    else
    {
        printf("This number is odd number");
    }
    return 0;
}
int main()
{
    int a;
    printf("Enter any number of a :");
    scanf("%d", &a);

    number(a);

    return 0;
}




/*
output
Enter any number of a :5
This number is odd number
*/