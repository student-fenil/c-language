#include <stdio.h>

int Meters(int k);

int Meters(int k)
{
    int m;
    return m = k * 1000;
}
int main()
{
    int k;
    printf("Enter any number of k :");
    scanf("%d", &k);

    printf("The value of Kilometers to Meters :%d", Meters(k));
    return 0;
}



/*
output
Enter any number of k :5
The value of Kilometers to Meters :5000
*/