/*

String: sequence of character

name:tithi

*/

#include<stdio.h>
#include<string.h>

void main()
{
    char name[10]="tIThi";
    printf("%s\n",name);

    char name2[10]="Prajapati";
    printf("%s\n",name2);

    char name3[10]={'r','o','y','a','l'};
    printf("%s\n",name3);

    // char str[10];
    // printf("Enter your name: ");
    // scanf("%s",str);
    // printf("Your name is: %s\n",str);
    // puts(str); // print the string

    // fflush(stdin);
    // char str2[10];
    // printf("Enter your email: ");
    // gets(str2);
    // puts(str2);

    // strlwr(name);
    // puts(name);

    // strupr(name);
    // puts(name);

    // strrev(name);
    // printf("%s",name);
    // printf("Enter string: ");
    // char s1[10];
    // char s2[10];
    // gets(s1);
    // gets(s2);

    // strcat(s1,s2);
    // puts(s1);


    printf("%s",strcat(name,name2));




}