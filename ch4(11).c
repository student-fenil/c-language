#include <stdio.h>

int main()
{

    for (int i = 0; i < 20; i++)
    {
        if (i == 5)
        {
              break;   // exit the loop now
            // continue;   //  skip this iteration now
        }

        printf("i is :%d\n", i);
    }
    printf("For loop is done");

    return 0;
}



/*
output
i is :0
i is :1
i is :2
i is :3
i is :4
For loop is done
*/