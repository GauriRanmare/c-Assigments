//Write a program to find sum of digits of given number.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    sum+=i;
    printf("%d\n",sum);
}