#include <stdio.h>

int main() {
    int n,i,sum=0,count=0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
   if(n%i==0)
    printf("%d\n",i);

    
    