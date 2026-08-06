#include <stdio.h>

int main()
{
    int a;
    float b;
    int c = 45;

    printf("The value of a is :");
    scanf("%d", &a);
    printf("The value of b is :");
    scanf("%f", &b);

    printf("The value of temperature from Celsius to Fahrenheit : %f", ((a / b) * c + 32));

    return 0;
}


/*output
The value of a is :10
The value of b is :20
The value of temperature from Celsius to Fahrenheit : 54.500000
*/