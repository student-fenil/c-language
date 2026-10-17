#include <stdio.h>

float c2f(float);

float c2f(float c)
{
    return ((9 * c) / 5) + 32;
}
int main()
{
    float c;
    printf("Enter any number of c :");
    scanf("%f", &c);

    printf("Celsius to Fahrenheit for %.2f is %.2f",c,c2f(c));

    return 0;
}




/*
output
Enter any number of c :5
Celsius to Fahrenheit for 5.00 is 41.00
*/