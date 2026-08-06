#include <stdio.h>

int main()
{
    int p, r, t;
    int si;

    printf("Enter Principal: ");
    scanf("%d", &p);

    printf("Enter Rate: ");
    scanf("%d", &r);

    printf("Enter Time: ");
    scanf("%d", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %d", si);

    return 0;
}


/*output
Enter Principal: 10
Enter Rate: 1000
Enter Time: 5
Simple Interest = 500
*/
