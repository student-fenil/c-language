#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the number :");
    scanf("%d", &a);
    printf("Enter the number :");
    scanf("%d", &b);

    printf(" \n The value of a and b is : %d", a && b);
    printf(" \n The value of a or b is : %d", a || b);
    printf(" \n The value of not(a) is : %d", !a);

    if (a && b)
    {
        printf(" \n Both are true");
    }
    // They are same

    if (a)
    {
        if (b)
        {
            printf(" \n Both are true");
        }
    }

    return 0;
}




/*output
Enter the number :10
Enter the number :20
 
 The value of a and b is : 1 
 The value of a or b is : 1 
 The value of not(a) is : 0 
 Both are true 
 Both are true
*/