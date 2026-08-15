#include <stdio.h>

int main()
{
    int a = 20, b = 5, c = 3, d = 2, e = 7;
    int f = a / b - c * d + e;

    printf("The answers is : %d ", f);

    return 0;
}

// a/b - c*d + e
// a/b - 6 + e
// 4 - 6 + e
// 4 - 6 + 7
// 4 - (-1)
// 5



/*output
The answers is : 5 
*/