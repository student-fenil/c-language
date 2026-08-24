#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("This number is Even number");

    else
        printf("This number is Odd number");

    return 0;
}


/*
output
Enter a number: 1
This number is Odd number
*/