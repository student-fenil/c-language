#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age :");
    scanf("%d", &age);

    if (age > 10)
    {
        printf("\n We are inside if");
        printf("\n Your age is greater than 10");
    }
    if (age % 5 == 0)
    {
        printf(" \n We are inside another if");
        printf(" \n Your age is divisible by 5");
    }

    return 0;
}


/*output
Enter your age :18

 We are inside if
 Your age is greater than 10
 */