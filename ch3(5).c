#include <stdio.h>

int main()
{
    int a;

    printf("Enter your age :");
    scanf("%d", &a);

    if (a > 60)
    {
        printf("You are citizen so you drive car");
    }

    else if (a > 40)
    {
        printf("You are elder so you drive car");
    }

    else if (a > 18)
    {
        printf("You can drive car");
    }

    else

    {
        printf("You cannot drive car");
    }

    return 0;
}




/*output
nter your age :19
You can drive car
*/
