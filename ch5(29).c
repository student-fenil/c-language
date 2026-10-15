#include <stdio.h>

int pattern(int a);

int pattern(int a)
{

    for (int i = 0; i < a; i++)
    {

        for (int j = 0; j < a; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    return 0;
}
int main()
{
    int a;
    printf("Enter any number a: ");
    scanf("%d", &a);

    pattern(a);

    return 0;
}






/*
output
Enter any number a: 5 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
PS D:\c language> 
*/