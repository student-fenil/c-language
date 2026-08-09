#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("%d", a % b);

    return 0;
}



/*output
Enter the value of a:10
Enter the value of b:20
10
*/