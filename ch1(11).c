#include <stdio.h>

int main()
{
    float side, area, volume;

    printf("Enter the side of the square/cube: ");
    scanf("%f", &side);

    area = side * side;
    volume = side * side * side;

    printf("Area of the square = %.2f\n", area);
    printf("Volume of the cube = %.2f\n", volume);

    return 0;
}



/*output
Enter the side of the square/cube: 100
Area of the square = 10000.00
Volume of the cube = 1000000.00
*/