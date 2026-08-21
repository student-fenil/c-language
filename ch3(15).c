#include <stdio.h>

int main()
{
    float salary;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    if (salary < 15000)
        printf("Tax = 0");

    else if (salary <= 25000)
        printf("Tax = 200");
        
    else
        printf("Tax = 300");

    return 0;
}



/*output'
Enter monthly salary: 10000
Tax = 0
*/