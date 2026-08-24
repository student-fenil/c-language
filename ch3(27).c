#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("This is Digit");

    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf(" This is Alphabet");

    else
        printf("This is new character");

    return 0;
}


/*
output
Enter a character: 123
This is Digit
*/