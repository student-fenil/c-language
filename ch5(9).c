#include <stdio.h>

int square(int a);

int square(int a)
{
    return a * a;
}
int main()
{
    int a;
    printf("Enter any number of a :");
    scanf("%d", &a);

    printf("The square is :%d", square(a));

    return 0;
}




/*
output
Enter any number of a :5
The square is :25
*/