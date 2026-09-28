#include <stdio.h>

int Power(int x,int y);

int Power(int x,int y)
{
    if (y == 0)
    {
        return 1;
    }

    return x * Power(x,y - 1);
}
int main()
{
    int x,y;
    printf("Enter any number of x :");
    scanf("%d", &x);
    printf("Enter any number of y :");
    scanf("%d", &y);


    printf("The power of a number is :%d", Power(x,y));

    return 0;
}







/*
output
Enter any number of x :5
Enter any number of y :6
The power of a number is :15625
*/