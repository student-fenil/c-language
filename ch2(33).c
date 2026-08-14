#include <stdio.h>

int main()
{
    int x = 6, y = 3, z = 8, w = 4, k = 2;
    int a = x * y + z / w - k;

    printf("The answers is : %d ", a);

    return 0;
}

// x*y + z/w - k
// 18 + z/w - k
// 18 + 2 - k
// 20 - k
// 20 - 2
// 18



/*output
The answers is : 18 
*/