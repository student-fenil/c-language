#include <stdio.h>

int main()
{
    float basic, pf, tax, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    pf = basic * 0.10;
    tax = basic * 0.05;
    net = basic - pf - tax;

    printf("Net Salary = %.2f", net);
    return 0;
}


/*output
Enter basic salary: 10000
Net Salary = 8500.00
*/