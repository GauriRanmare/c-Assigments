/*  Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator)
 Modify and find minimum of three numbers*/

 #include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
     printf("enter number");
     scanf("%d%d%d",&a,&b,&c);
     if(c>a&&c>b)
     printf("max is%d",c);
    else if(b>=a&&b>=c)
       printf("max is%d",b);
     else
     printf("max is %d",a);
}