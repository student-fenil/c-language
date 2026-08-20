#include<stdio.h>

int main()
{
    int persontage;
    printf("Enter your parsontage :");
    scanf("%d",&persontage);

    if (persontage>=75)
    {
        printf("You are  wailed for scholarship");
    }
    else if (persontage<=60)
    {
        printf("You are not wailed for scholarship");
    }
    

    return 0;
}



/*
output
Enter your parsontage :80
You are  wailed for scholarship
*/