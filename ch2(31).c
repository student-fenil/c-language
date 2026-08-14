#include <stdio.h>

int main()
{
    int a = 4, b = 10, c = 2, d = 3;
    int y = 5 * a - b / c + d;

    printf("The answers is : %d ", y);

    return 0;
}

// 5*a - b/c + d
// 20 - b/c + d
// 20 - 5 + d
// 15 + 3
// 18



/*output
The answers is : 18                                                                                                  
*/