#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("This character is Digit");
    else
        printf("This character is Not digit");

    return 0;
}
