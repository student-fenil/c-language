#include <stdio.h>

int Kelvin(int c);

int Kelvin(int c)
{
    int k;
    return k = c + 273;
}
int main()
{
    int c;
    printf("Enter any number of c :");
    scanf("%d", &c);

    printf("The value of Celsius to Kelvin :%d", Kelvin(c));

    return 0;
}



/*
output
Enter any number of c :5
The value of Celsius to Kelvin :278
*/