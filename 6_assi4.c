//Write a program to print x to y (both inclusive)
#include<stdio.h>
int main()
{
    int i,x,y;
    printf("Enter the x:");
    scanf("%d",&x);

    printf("Enter the y:");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    printf("%d\n",i);
}