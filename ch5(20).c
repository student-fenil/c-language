#include <stdio.h>

float Pressure(float f, float a); 

float Pressure(float f, float a)
{
    float p;
    return p = f / a;
}
int main()
{
    float f, a;
    printf("Enter any number of f :");
    scanf("%f", &f);
    printf("Enter any number of a :");
    scanf("%f", &a);

    printf("The value of pressure is :%.2f", Pressure(f, a));

    return 0;
}





/*
output
Enter any number of f :5
Enter any number of a :6
The value of pressure is :0.83
*/