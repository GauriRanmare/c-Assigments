#include <stdio.h>
int main()
{
    int i, n, a[100],sum=0,Avg;
    printf("how many number you want to enter");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
   
    for (i = 0; i < n; i++)
       sum +=a[i];
       printf("sum of number=%d\n",sum);
       Avg=sum/n;
       printf("Average:%d\n",Avg);
       return 0;
}
