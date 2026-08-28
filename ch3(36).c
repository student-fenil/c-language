#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter your income :");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0.05 * (income - 500000);
    }
    else if (income < 250000 && income <= 500000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.5 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("The total tax you need to pay is %.3f", tax);

    return 0;
}

/*
output
Enter your income :50000
The total tax you need to pay is -22500.000
*/