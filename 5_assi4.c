//Write a program to print 1 to N
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",i);
    return 0;
}