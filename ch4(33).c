#include <stdio.h>

int main()
{

    // using for loop
    int sum = 0;

    for (int i = 2; i <= 20; i=i+2)
    {
        sum += i;
    }

    // using do while loop
    // int i = 2;
    // int sum = 0;

    // do
    // {
    //     sum += i;
    //     i=i+2;
    // } while (i <= 20);

    printf("The sum of implement of even number is : %d\n", sum);

    return 0;
}



/*
output
The sum of implement of even number is : 110
*/