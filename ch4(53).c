#include <stdio.h>

int main()
{
    int i = 1, j, count;

    do
    {
        count = 0;
        j = 1;

        do
        {
            if (i % j == 0)
            {
                count++;
            }
            j++;
        } while (j < 100);

        if (count == 2)
        {
            printf("%d\n", i);
        }

        i++;
    } while (i < 100);

    return 0;
}




/*
output
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/