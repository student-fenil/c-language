#include<stdio.h>

int main()
{
    int n;
    printf("Enter any number of table :");
    scanf("%d",&n);

    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    

    return 0;
}

/*
output
Enter any number of table :10
10 X 10 = 100
10 X 9 = 90
10 X 8 = 80
10 X 7 = 70
10 X 6 = 60
10 X 5 = 50
10 X 4 = 40
10 X 3 = 30
10 X 2 = 20
10 X 1 = 10
*/