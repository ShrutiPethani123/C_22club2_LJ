#include<stdio.h>

void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    printf("%d",ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("Alphabet");
    }else if (ch>='0' && ch<='9'){
        printf("Number");
    }else{
        printf("Special character");
    }
    
}