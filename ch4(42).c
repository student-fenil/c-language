#include <stdio.h>

int main()
{
   int count;
    for (int i = 1; i < 100; i++)
    {
        count=0;
        for (int j = 1; j < 100; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        if (count==2)
        {
            printf("%d \n",i);
        }
        
    }
    

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