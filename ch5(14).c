#include <stdio.h>

int Centimeters(int m);

int Centimeters(int m)
{
    int c;
    return c = m * 100;
}
int main()
{
    int m;
    printf("Enter any number of k :");
    scanf("%d", &m);

    printf("The value of Meters to Centimeters :%d", Centimeters(m));
    return 0;
}


/*
output
Enter any number of k :6
The value of Meters to Centimeters :600
*/