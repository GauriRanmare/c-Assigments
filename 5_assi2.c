#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    if( n%5==0 && n%7==0)
    printf(" number is divisible by 5 and 7");
    else
    printf("number is Not divisible by 5 and 7");
}