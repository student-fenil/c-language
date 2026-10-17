#include <stdio.h>

float force(float);

float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    float m;
    printf("Enter any number of m :");
    scanf("%f", &m);

    printf("The value of force is :%.2f\n",force(m));

    return 0;
}



/*
output
Enter any number of m :5
The value of force is :49.00*/