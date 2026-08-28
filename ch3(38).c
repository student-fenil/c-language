#include<stdio.h>

int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);

    printf("The character is : %c \n ",ch);
    printf("The value of character is : %d \n ",ch);

    if(ch>=97 && ch<=122)
    {
        printf("This character is lowercase \n ");
    }
    else
    {
        printf("This character is not lowercase \n ");
    }

    return 0;
}


/*
output
Enter character :fenil
The character is : f 
 The value of character is : 102 
 This character is lowercase 
 */