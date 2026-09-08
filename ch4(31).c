#include <stdio.h>

int main()
{

    // using for loop
    // int sum = 0;

    // for (int i = 1; i < 10; i=i+2)
    // {
    //     sum += i;
    // }

    // using do while loop
    int i = 1;
    int sum = 0;

    do
    {
        sum += i;
        i=i+2;
    } while (i < 10);

    printf("The sum of implement of odd number is : %d\n", sum);

    return 0;
}



/*
output
The sum of implement of odd number is : 25
*/