// Write a program to find sum of x to y (both inclusive)

#include<stdio.h>
int main()
{
    int x,y,sum=0,i,n;

    printf("Enter the x number:");
    scanf("%d",&x);

    printf("Enter the y Number:");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    sum+=i;

  printf("%d\n",sum);


}