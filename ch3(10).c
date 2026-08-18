#include <stdio.h>

int main()
{
    int subject1, subject2, subject3,subject4;
    printf("Enter your subject :");
    scanf("%d", &subject1);
    printf("Enter your subject :");
    scanf("%d", &subject2);
    printf("Enter your subject :");
    scanf("%d", &subject3);
     printf("Enter your subject :");
    scanf("%d", &subject4);

    if (subject1<35 || subject2<35 || subject3<35 || subject4)
    {
        printf("You are promoed");
    }
    else if (subject1>35 || subject2>35 || subject3>35 || subject4)
    {
        printf("They are promoed");   
    }
    

    return 0;
}



/*output
PS D:\c language> .\udf.exe             
Enter your subject :cc
Enter your subject :Enter your subject :Enter your subject :You are promoed
*/