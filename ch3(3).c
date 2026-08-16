#include <stdio.h>

int main()

{
    if (1)
    {
        printf(" \n This if is executed!");
    }

    if (354225)
    {
        printf(" \n This if also executed!");
    }

    if (34.65)
    {
        printf(" \n This if is float but executed!");
    }

    if ("y")
    {
        printf(" \n This if is charecter but executed!");
    }

    if (0)
    {
        printf(" \n This if is not executed!");
    }

    return 0;
}


/*
output
 This if is executed! 
 This if also executed! 
 This if is float but executed! 
 This if is charecter but executed!
*/