#include <stdio.h>

int main()
{
    int p, q;
    printf(" \n The value of a length : ");
    scanf("%d", &p);
    printf(" \n The value of a width : ");
    scanf("%d", &q);

    printf("The value of perimeter of a rectangle is : %d", 2 * (p + q));

    return 0;
}




/*output
 The value of a length : 10
 
 The value of a width : 10
The value of perimeter of a rectangle is : 40
*/