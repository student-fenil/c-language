#include <stdio.h>

int main()
{
    float amount, discount = 0;

    printf("Enter total bill amount: ");
    scanf("%f", &amount);

    if (amount >= 2000 && amount <= 5000)
        discount = amount * 0.10;

    else if (amount > 5000)
        discount = amount * 0.20;

    printf("Discount = %.2f \n ", discount);
    printf("Payable Amount = %.2f \n ", amount - discount);

    return 0;
}



/*output
Enter total bill amount: 1000
Discount = 0.00 
 Payable Amount = 1000.00 
 
*/