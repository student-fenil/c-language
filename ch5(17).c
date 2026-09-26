#include <stdio.h>

float KE(float m, float v); // KE= Kinetic Energy

float KE(float m, float v)
{
    float KE;
    return KE = (0.5) * m * (v * v);
}
int main()
{
    float m, v;
    printf("Enter any number of m :");
    scanf("%f", &m);
    printf("Enter any number of v :");
    scanf("%f", &v);

    printf("The value of Kinetic Energy :%.2f", KE(m, v));

    return 0;
}









/*
output
Enter any number of m :5
Enter any number of v :6
The value of Kinetic Energy :90.00
*/