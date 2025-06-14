//Write a program to compare two numbers? (==,>,<)
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter a Number");
    scanf("%d%d", &n1,&n2);
    if(n1==n2){
    printf("both number are equal\n");
    printf("n1 is greater=%d",n1);
    }
    else if(n2>n1){
    printf("n1 is greater=%d",n2);}
    else{
    printf("\nn2 is less");
    }
}