#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
        printf("This is Divisible by 4");
    else
        printf("This is Not divisible by 4");

    return 0;
}
