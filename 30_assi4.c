// Write a program to print sum of factors of a given number
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter  a Number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
        printf("%d", sum);

        printf("sum of facter \n%d",sum);
    }
}