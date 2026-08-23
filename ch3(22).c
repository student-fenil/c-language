#include <stdio.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("February has 29 days");
    else
        printf("February has 28 days");

    return 0;
}



/*output
Enter year: 19                                                                                                                      
February has 28 days
*/