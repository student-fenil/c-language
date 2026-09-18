#include <stdio.h>

int change(int a);

int change(int a)
{
    a=77;   // Misnomer
    return 0;
}

int main()
{
    int b = 41;
    change(b);
    printf("b is %d", b);

    return 0;
}



/*
output
b is 41
*/