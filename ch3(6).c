#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the number :");
    scanf("%d", &a);
    printf("Enter the number :");
    scanf("%d", &b);

    a > b ? printf("a is Greater") : printf("b is Greater");

    return 0;
}



/*output
Enter the number :10
Enter the number :20
b is Greater
*/