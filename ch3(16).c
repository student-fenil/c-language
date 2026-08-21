#include <stdio.h>

int main()
{
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 2;

    else if (units <= 200)
        bill = (100 * 2) + ((units - 100) * 3);

    else
        bill = (100 * 2) + (100 * 3) + ((units - 200) * 5);

    printf("Electricity Bill = %.2f", bill);
    return 0;
}



/*
output
Enter units consumed: 1000
Electricity Bill = 4500.00
*/