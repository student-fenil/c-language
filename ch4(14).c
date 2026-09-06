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
Enter any number of table :2
2 X 10 = 20
2 X 9 = 18
2 X 8 = 16
2 X 7 = 14
2 X 6 = 12
2 X 5 = 10
2 X 4 = 8
2 X 3 = 6
2 X 2 = 4
2 X 1 = 2
*/