//Write a program to find sum of 1 to N (sum of first N numbers) (with and
//without loop)

#include<stdio.h>
int main()
{
    int sum=0,n;
     printf("sum of 1 to n:");
    scanf("%d",&n);

    sum=n*(n+1)/2;
    

    printf("%d\n",sum);
}