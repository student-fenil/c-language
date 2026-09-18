#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int b;
    printf("Enter any number of a :");
    scanf("%d",&a);
    printf("Enter any number of b :");
    scanf("%d",&b);

    printf("The area of this square is %.2f\n",pow(a,b));

    return 0;
}


/*
output
Enter any number of a :5
Enter any number of b :5
The area of this square is 3125.00
*/