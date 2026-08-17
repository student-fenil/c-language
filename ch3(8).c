#include <stdio.h>

int main()
{
    char grade;
    int mark;

    printf("Enter your mark :");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100)
    {
        grade = 'A';
    }
    else if (mark >= 80)
    {
        grade = 'B';
    }
    else if (mark >= 70)
    {
        grade = 'C';
    }
    else if (mark >= 60)
    {
        grade = 'D';
    }
    else if (mark >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf(" \nYour grade is: %c", grade);

    return 0;
}




/*output
Enter your mark :90
 
Your grade is: A
*/