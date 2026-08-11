#include <stdio.h>

int main()
{
    int kg;
    int grams, milligrams;

    printf("Enter the value of Kilograms is : ");
    scanf("%d", &kg);

    grams = kg * 1000;
    milligrams = kg * 100000;

    printf(" \n The value of kg is : %d", grams);
    printf(" \n the value of kg is : %d", milligrams);

    return 0;
}


/*output
Enter the value of Kilograms is : 10
 
 The value of kg is : 10000 
 the value of kg is : 1000000
 */