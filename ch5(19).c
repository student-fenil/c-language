#include <stdio.h>

int Momentum(int m, int v); 

int Momentum(int m, int v)
{
    int p;
    return p = m * v;
}
int main()
{
    int m, v;
    printf("Enter any number of m :");
    scanf("%d", &m);
    printf("Enter any number of v :");
    scanf("%d", &v);

    printf("The value of momentum of a body :%d", Momentum(m, v));

    return 0;
}









/*
output
Enter any number of m :5
Enter any number of v :6
The value of momentum of a body :30
*/