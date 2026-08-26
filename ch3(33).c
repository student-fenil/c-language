#include <stdio.h>
int main()
{
    float principal, rate, time, interest;

    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", interest);
    return 0;
}


/*
output
Enter principal, rate, and time: 10
20
30
Simple Interest = 60.00*/
