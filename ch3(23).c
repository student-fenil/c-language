#include <stdio.h>

int main()
{
    int a1, b2;
    printf("Enter two years: ");
    scanf("%d %d", &a1, &b2);

    if (((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)) && ((b2 % 4 == 0 && b2 % 100 != 0) || (b2 % 400 == 0)))
        printf("Both are leap years");
    else
        printf("Both are not leap years");

    return 0;
}
