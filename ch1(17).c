#include <stdio.h>

int main()
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf(" \n The value of hours is : %d", hours);
    printf(" \n The value of minutes is : %d", minutes);
    printf(" \n The value of seconds is : %d", seconds);

    return 0;
}



 /*output
 Enter total seconds: 100
 
 The value of hours is : 0 
 The value of minutes is : 1 
 The value of seconds is : 40
 */