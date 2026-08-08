#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;

    printf(" \n The value is : %d", a * b / c + 7);
    printf(" \n The value is : %d", 3 * b / 2 * c + 7 * a);

    return 0;
}

// 3*b/2*c+7*a
// 3*b/2*c+21
// 18/2*c+21
// 9*c+21
// 81+21
// 120



/*output
 The value is : 9 
 The value is : 102
*/