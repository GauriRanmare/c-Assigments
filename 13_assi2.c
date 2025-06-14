//Accept the time as hour, minute and seconds and check whether the time is
//valid. (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) (3 lo
#include<stdio.h>
int main()
{
    int hours,min,sec;
    printf("Enter a hours,mintes,second");
    scanf("%d%d%d",&hours,&min,&sec);

    if(hours>0&&hours<24)
    {
        if(min>0&&min<60)
        {
            if(sec>0&&sec<60)
            {
                printf("time is valid");
            }
            else
            printf("second are Invalid");
        }
        else
        printf("minutes are Invalid");
    }
    else
    printf("time is Invalid");
}
