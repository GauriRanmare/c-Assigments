#include <stdio.h>

int main() {
    int n, digit;
    int evenCount = 0, oddCount = 0, zeroCount = 0;

   
    printf("Enter a number: ");
    scanf("%d", &n);

    
    while (n > 0)
     {
        digit = n % 10; 

        if (digit == 0)
        
        zeroCount++; 
        
        else if (digit % 2 == 0)
            evenCount++; 
        else
            oddCount++;

        n/= 10; 
    }

 
    printf(" even digits: %d\n", evenCount);
    printf(" odd digits: %d\n", oddCount);
    printf("zero digits: %d\n", zeroCount);

    return 0;
}