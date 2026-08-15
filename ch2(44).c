#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y - z+k, where x=2, y=3, z=3, k=1

    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k;

    printf("The value of e is : %.4f", e);

    return 0;
}

/*
    3*x/y - z+k
    6/y - z+k
    2 - z+k
    -1+k
    -1+1
     0
*/



/*output
The value of e is : 0.0000
*/