#include <stdio.h>

int AP(int a, int d, int n);

int AP(int a, int d, int n)
{
    return a + (n - 1) * d;
}
int main()
{
    int a, d, n;
    
    printf("Enter any number of a :");
    scanf("%d", &a);
    printf("Enter any number of d :");
    scanf("%d", &d);
    printf("Enter any number of n :");
    scanf("%d", &n);

    printf("The value of Arithmetic Progression is :%d", AP(a, d, n));

    return 0;
}









/*
output
Enter any number of a :5
Enter any number of d :6
Enter any number of n :5
The value of Arithmetic Progression is :29
*/