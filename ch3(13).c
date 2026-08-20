#include<stdio.h>

int main()
{
    int mark;
    printf("Enter your mark :");
    scanf("%d",&mark);
    printf("Your mark is :%d\n",mark);

    if (mark>=35)
    {
        printf("You are pass!");
    }
    else if (mark<=35)
    {
        printf("You are fail!");
    }
    
    

    return 0;
}



/*output
Enter your mark :80
Your mark is :80
You are pass!
*/