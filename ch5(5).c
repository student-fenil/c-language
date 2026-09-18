#include <stdio.h>

int factorial(int);

// factorial(5) = 1 X 2 X 3 X 4 X 5
// factorial(4) = 1 X 2 X 3 X 4
// factorial(3) = 1 X 2 X 3
// factorial(n) = 1 X 2 X 3 X ....... X n
// factorial(n) = 1 X 2 X 3 X ....... X n-1 X n
// = 1 X 2 X 3 X ....... X n-1

int factorial(int n)
{
    if (n == 1 || n == 0)   // Base condition
    {
        return 1;
    }
    // factorial(n) = factorial(n-1) X n
    return factorial(n - 1) * n;
}

int main()
{
    int a;
    printf("Enter any number of a :");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, factorial(a));

    return 0;
}




/*
output
Enter any number of a :5
The factorial of 5 is 120
*/