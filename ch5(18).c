#include <stdio.h>

float PE(float m, float h); // PE = Potential Energy

float PE(float m, float h)
{
    float PE;
    return PE = m * 9.8 * h;
}
int main()
{
    float m, h;
    printf("Enter any number of m :");
    scanf("%f", &m);
    printf("Enter any number of h :");
    scanf("%f", &h);

    printf("The value of Potential Energy :%.2f", PE(m, h));

    return 0;
}









/*
output
Enter any number of m :5
Enter any number of h :6
The value of Potential Energy :294.00
*/