#include <stdio.h>

int main()
{
    int principal;
    float rat;
    int time;
    printf("The Principal amount :");
    scanf("%d", &principal);

    printf("The Rate of interest :");
    scanf("%f", &rat);

    printf("The Time :");
    scanf("%d", &time);

    printf("The value of simple interest is :%f", (principal * rat * time) / 100);

    return 0;
}


/*output
The Principal amount :10000
The Rate of interest :10
The Time :8
The value of simple interest is :8000.000000
*/