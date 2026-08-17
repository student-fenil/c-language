#include <stdio.h>

int main()
{
    int a;
    printf("Enter 1 to 4 any number :");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You enter 1");
        break;
    case 2:
        printf("You enter 2");
        break;
    case 3:
        printf("You enter 3");
        break;
    case 4:
        printf("You enter 4");
        break;

    default:
        printf("Nothing matched");
    }

    return 0;
}



/*output
Enter 1 to 4 any number :3
You enter 3
*/