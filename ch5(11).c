#include <stdio.h>

float Fahrenheit(float f);

float Fahrenheit(float f)
{
    float c;
    return c = ((f - 32) * 5 / 9);
}
int main()
{
    int f;
    printf("Enter any number of f :");
    scanf("%d", &f);

    printf("The value of Fahrenheit to Celsius :%.2f",Fahrenheit(f));

    return 0;
}




/*
output
Enter any number of f :4
The value of Fahrenheit to Celsius :-15.56
*/