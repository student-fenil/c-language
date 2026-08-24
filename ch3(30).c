#include <stdio.h>
int main()
{
    float length, breadth, area;
    
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    printf("Area of rectangle = %.2f", area);

    return 0;
}



/*
output
Enter length and breadth: 10                                                         
20
Area of rectangle = 200.00
*/