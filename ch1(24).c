#include <stdio.h>

int main()
{
    int p = 1000, r = 5, t = 1;

    printf(" \n Principal = %d", p);
    printf(" \n Rate = %d", r);
    printf(" \n Time = %d", t);
    printf(" \n Simple Interest = %d", (p * r * t) / 100);

    return 0;
}



/*output
Principal = 1000 
 Rate = 5 
 Time = 1 
 Simple Interest = 50
*/