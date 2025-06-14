//. Write a program that accepts a number and count the number of digits in
//given number
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    while(n>0)
    {
        count++;
        n=n/10;

    }
    printf("%d",count);
}