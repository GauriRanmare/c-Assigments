//Write a program to find sum of even numbers from x to y (both inclusive)
//(or odd numbers)

#include<stdio.h>
int main()
{
    int x,y,sum=0,i;

    printf("Enter the x no:");
    scanf("%d",&x);

    printf("Enter the y :");
    scanf("%d",&y);

    for(i=x;i<=y;i++)
    if(i%2==0)
    sum+=i;

    printf("%d\n",sum);
}