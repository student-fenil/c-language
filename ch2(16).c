#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter the value of Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("The value of Celsius to Fahrenheit is: %.2f", f);

    return 0;
}



/*
output
Enter the value of Celsius: 10
The value of Celsius to Fahrenheit is: 50.00
*/