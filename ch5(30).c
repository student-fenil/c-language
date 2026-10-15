#include <stdio.h>

char pattern(char a);

char pattern(char a)
{

    for (char i = 'a'; i <= a; i++)
    {

        for (char j = 'a'; j <= i; j++)
        {
            printf(" %c ", i);
        }

        printf("\n");
    }
    return 0;
}
int main()
{
    char a;
    printf("Enter any number a: ");
    scanf("%c", &a);

    pattern(a);

    return 0;
}