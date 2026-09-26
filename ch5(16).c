#include<stdio.h>

float Weight(float m);

float Weight(float m)
{
    float w;
    return w=m*9.8; 
}
int main()
{
    int m;
    printf("Enter any number of m :");
    scanf("%d",&m);

    printf("The value of Weight of a Body is :%.2f",Weight(m));

    return 0;
}






/*
output
Enter any number of m :5
The value of Weight of a Body is :49.00
*/