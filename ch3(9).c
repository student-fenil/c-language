#include <stdio.h>

int main()
{
    int subject1, subject2, subject3;
    printf("Enter your subject :");
    scanf("%d", &subject1);
    printf("Enter your subject :");
    scanf("%d", &subject2);
    printf("Enter your subject :");
    scanf("%d", &subject3);

    if (subject1<33 || subject2<33 || subject3<33)
    {
        printf("They student are failed");
    }
    else if (subject1>33 || subject2>33 || subject3>33)
    {
        printf("They student are passed");   
    }
    

    return 0;
}



/*output
Enter your subject :maths
Enter your subject :Enter your subject :They student are failed
PS D:\c language> 
*/