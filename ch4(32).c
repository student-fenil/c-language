#include<stdio.h>

int main()
{
    // using for loop
    int sum = 0;
    int n=50;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    

     // using do while loop
//     int n=50;
//     int i=1;
//     int sum=0;
    
//    do
//     {
//         sum+=i;
//         i++;
//     } while (i<=n);

    printf("The sum of 50 natural numbers is :%d\n",sum);

    return 0;
}



/*
output
The sum of 50 natural numbers is :1275
*/