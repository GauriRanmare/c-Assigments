//Write a program to find sum of 1 to 5 (sum of first 5 numbers)
#include<stdio.h>
int main()
{
    int sum=0,i;
    for(i=1;i<=5;i++)
    sum+=i;

    printf("sum of 1 to 5 is %d",sum);
}