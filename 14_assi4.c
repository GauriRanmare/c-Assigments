//Write a program to print even numbers from x to y (both inclusive) (or odd
//numbers)

#include <stdio.h>
int main()
{
    int i,x,y;
    printf("Enter the starting Number:");
    scanf("%d", &x);

    printf("Enter The ending number");
    scanf("%d", &y);

    x=(x%2==0)?x:x+1;
    for(i=x;i<=y;i+=2)

    printf("%d\n",i);
    return 0;
}


