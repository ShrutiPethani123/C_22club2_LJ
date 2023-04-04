#include<stdio.h>
#include<string.h>


void main()
{
    // string: 

    // char ch[]="22clubLJ"; // string literals
    // printf("%s",ch);


    // // char ch2[10]={'j','a','v','a'};
    // char ch2[10]="java";
    // printf("\n%s",ch2);

    // printf("\n%c" , ch[1]); // 2
    // printf("\n%c" , ch2[1]); //a

    // char s1[10];
    // // char *s2;
    // printf("Enter a string: ");
    // // scanf("%s",s2);
    // // printf("%s",s2);

    // gets(s1);
    // // printf(s1);

    // puts(s1);


    char str1[100]="java pyt";
    char str2[10]="script";

    printf("Length of str: %d",strlen(str1));

    char str3[10];
    strcpy(str3,str1);
    printf("\n%s",str3);


    char str4[10]="python";
    // strcat(str1,"hon"); 
    // printf("\n%s",str1);

    printf("\n %d" , strcmp(str3,str1));
    printf("\n %d" , strcmp(str4,str2));
    //0 1 -1


    printf("\n%s",strupr(str4));
    printf("\n%s",str4);

    printf("\n%s",strlwr(str4));
    printf("\n%s",str4);

    printf("\n%s",strrev(str4));
    printf("\n%s",str4);



    
}

/*

take one string from user and count total number of vowels and consonant.

str: Good Morning

vowels:
consonants: 

gets(str1)

int i=0;
while(str[i]!='\0')
{
    if(str[i]=='A' ||)
}

*/

