// Write a program to find sum of even numbers from 1 to 10 (or odd numbers)
#include<stdio.h>
int main()
{
    int i,sum=0;
   for(i=1;i<=10;i++)
   
   if(i%2==0)
   sum+=i;
   printf("even no %d\n",sum);
}