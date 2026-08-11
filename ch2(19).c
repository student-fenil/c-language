#include <stdio.h>

int main()
{
    float c;
    int f = 77;

    c = (f - 32) * 5 / 9;

    printf("The value of Fahrenheit to Celsius is : %.3f", c);

    return 0;
}


/*output
The value of Fahrenheit to Celsius is : 25.000
*/