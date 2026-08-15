#include <stdio.h>

int main()
{
    int p = 5, q = 6, r = 2, s = 3, t = 4;
    int v = p + q * r / s - t;

    printf("The answers is : %d ", v);

    return 0;
}

// p+q*r/s - t
// p+12/s - t
// p+4 - t
// 5+4 - t
// 9 - t
// 9 - 4
// 5




/*output
The answers is : 5 
*/