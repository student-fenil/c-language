#include <stdio.h>

int main()
{
    int km;
    int meters, centimeters;

    printf("Enter the value of kilometers: ");
    scanf("%d", &km);

    meters = km * 1000;
    centimeters = km * 100000;

    printf("Meters: %d\n", meters);
    printf("Centimeters: %d", centimeters);

    return 0;
}

/*
output
Enter the value of kilometers: 10
Meters: 10000
Centimeters: 1000000
*/