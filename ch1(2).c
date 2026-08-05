#include <stdio.h>

int main()
{
    printf("size of  int : %zu bytes \n ", sizeof(int));
    printf("size of  char : %zu bytes \n ", sizeof(char));
    printf("size of  float : %zu bytes \n ", sizeof(float));

    return 0;
}



/*output
ize of  int : 4 bytes 
 size of  char : 1 bytes 
 size of  float : 4 bytes 
 */