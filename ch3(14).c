#include <stdio.h>

int main()
{
    float salary, bonus;

    printf("Enter annual salary: ");
    scanf("%f", &salary);

    if (salary < 300000)
        bonus = salary * 0.05;

    else if (salary <= 700000)
        bonus = salary * 0.10;

    else
        bonus = salary * 0.15;
        

    printf("Bonus = %.2f", bonus);
    return 0;
}



/*
output
Enter annual salary: 100000
Bonus = 5000.00
*/