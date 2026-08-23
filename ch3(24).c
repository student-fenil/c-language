#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("This character is Uppercase letter");
    else
        printf("This character is Not uppercase letter");

    return 0;
}



/*output
Enter a character: string
This character is Not uppercase letter
*/