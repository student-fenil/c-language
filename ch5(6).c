#include<stdio.h>

int sum(int a,int b);

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter any number of a :");
    scanf("%d",&a);
    printf("Enter any number of b :");
    scanf("%d",&b);

    printf("The sum of two number is :%d\n",sum(a,b));
    
    return 0;
}



/*
output
Enter any number of a :5
Enter any number of b :6
The sum of two number is :11
*/