// Write a program to accept marks for three subjects and find the total marks
// secured , average and also display the class obtained. (Class I – above %, class
// II – % to %, pass class – % to % and fail otherwise)

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter Marks To Check Result\n");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 91)
    {
        printf("Class I – above 90%%");
    }
    else if (marks <= 90 && marks > 81)
    {
        printf(", class II – above 80%%");
    }
    else if (marks <= 80 && marks > 35)
    {
        printf(" pass class – above 35%%");
    }
    else{
        printf("fail");
    }
    return 0;
    }