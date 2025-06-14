//Write a program to print factors of a given number
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    printf("%d\n",i);
    }
}