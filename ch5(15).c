#include <stdio.h>

int Grams(int k);

int Grams(int k)
{
    int g;
    return g = k * 1000;
}
int main()
{
    int k;
    printf("Enter any number of k :");
    scanf("%d", &k);

    printf("The value of Kilograms to Grams :%d", Grams(k));
    return 0;
}





/*
output
Enter any number of k :5
The value of Kilograms to Grams :5000
*/