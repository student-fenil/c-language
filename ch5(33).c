#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a, b, c;
    printf("Enter any number of a :");
    scanf("%d", &a);
    printf("Enter any number of b :");
    scanf("%d", &b);
    printf("Enter any number of c :");
    scanf("%d", &c);

    printf("The average of a , b and c is %.2f", average(a, b, c));

    return 0;
}





/*
output
Enter any number of a :5
Enter any number of b :4
Enter any number of c :5
The average of a , b and c is 4.67
PS D:\c language> 
*/