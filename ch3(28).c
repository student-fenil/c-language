#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf(" This is Positive number");

    else if (num < 0)
        printf("This is Negative number");

    else
        printf("This Number is zero");

    return 0;
}


/*
output
Enter a number: 123
 This is Positive number
 */