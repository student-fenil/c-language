#include <stdio.h>

int main()
{
    int a, c, si;
    float b;

    printf("The value of principa amount :");
    scanf("%d", &a);

    printf("The value of rate :");
    scanf("%f", &b);
    
    printf("The value of  time :");
    scanf("%d", &c);

    si = (a * b * c) / 100;

    printf("simple Interest : %d", si);

    return 0;
}



/*output
The value of principa amount :1000
The value of rate :20
The value of  time :4
simple Interest : 800
*/