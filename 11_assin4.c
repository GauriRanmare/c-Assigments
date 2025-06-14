//Write a program to print even numbers from 1 to 10 (or odd numbers)

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++){
    if(i%2==0)

    printf("Number is %d even\n:",i);
    else
    printf("number is %d odd\n:",i);
    }
    
}