#include<stdio.h>

int main()
{
    int i=0;
    int n;
    printf("Enter any number of n :");
    scanf("%d",&n);

    do
    {
        printf("\n The value of i is :%d",i);
        i++;
    } while (i<=n); 
    


    return 0;
}



/*
output
Enter any number of n :
4

 The value of i is :0
 The value of i is :1
 The value of i is :2
 The value of i is :3
 The value of i is :4
*/