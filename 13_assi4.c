//Write a program to print even numbers from 1 to N (or numbers)
#include<stdio.h>
int  main()
{
    int i,n;

    printf("Enter the even no:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    if(i%2==0)
    printf("even number  %d\n",i);

}
