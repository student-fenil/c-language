#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("This character is Alphabet");

    else
        printf("This character is Not alphabet");
       

    return 0;
}



/*
output
Enter a character: abc
This character is Alphabet
*/