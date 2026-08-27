#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;

    printf("Enter your marks1 :");
    scanf("%d", &marks1);
    printf("Enter your marks2 :");
    scanf("%d", &marks2);
    printf("Enter your marks3 :");
    scanf("%d", &marks3);
    printf("The marks are %d , %d and %d \n ", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are failed due to less mark in individual subject(s) \n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are failed due less percentage \n");
    }
    else
    {
        printf("You are passed!");
    }

    return 0;
}


/*
output
Enter your marks1 :70
Enter your marks2 :80
Enter your marks3 :60
The marks are 70 , 80 and 60 
 You are passed!
*/