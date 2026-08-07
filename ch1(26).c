#include <stdio.h>

int main()
{
    int a = 20;
    int height = 40;

    printf(" \n The area of circle redius %d is : %.1f", a, 2.3 * a * a);
    printf(" \n The volume of a cylinder with redius %d and height %d is : %.1f", a, height, 2.3 * a * a * height);

    return 0;
}

/*output
The area of circle redius 20 is : 920.0 
 The volume of a cylinder with redius 20 and height 40 is : 36800.0
 */