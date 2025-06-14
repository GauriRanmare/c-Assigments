//Write a program to find sum of even numbers from 1 to N (or odd numbers)
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    if(i%2!=0)
    sum+=i;

    printf("sum of even number is %d\n",sum);
}