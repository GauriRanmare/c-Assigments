//Write a Program to convert lowercase letter into uppercase letter and viceversa

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(towlower(ch)>='a'&&tolower(ch)<='z')
    {
      printf("given character is lowcase letter:");
    }
    else if(toupper(ch)>='A'&&toupper(ch)>='Z')
    {
        printf("character is uppercase letter");
    }
    else{
        printf("character is number");
    }
    }
