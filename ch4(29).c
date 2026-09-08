#include <stdio.h>

int main()
{

    // using for loop
    /*    int sum=0;
        int n;
         printf("Enter any number of table :");
        scanf("%d",&n);

        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }     */

    // using do while loop
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter any number of table :");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("The sum of implement number is : %d\n", sum);

    return 0;
}


/*
output
Enter any number of table :5
The sum of implement number is : 15
*/