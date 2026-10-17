#include <stdio.h>

int main()
{
    int y;
    printf("Enter any number of y :");
    scanf("%d", &y);

    printf("%d %d %d", y, ++y, y++);

    return 0;
}






/*
output
Enter any number of y :5
7 7 5
*/