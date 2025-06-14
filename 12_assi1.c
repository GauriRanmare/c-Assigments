/*Accept a character from the keyboard and display its previous and next character in order*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Chrater:");
    scanf("%c",&ch);

    printf("Previous character:%c\n",ch-1);
    printf("next character:%c\n",ch+1);
    return 0;

}