#include <stdio.h>

int pattern(int a);

int pattern(int a)
{
     
    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= a; j++)
        {
            if (j>=(a+1)-i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
            
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
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/