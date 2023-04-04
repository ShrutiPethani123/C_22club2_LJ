/*


1. Take one string from user and print length of that string without using inbult function.
2. Take one string from user and count total number of vowels and consonant.

str: Good Morning123

vowels:4
consonants: 7

3. Take one string and after that take one character from user and check find that character index in String if not present that print charcater is not found!!

str = "Python"

ch: t -> 2
ch: f -> not found!!

4. find last index of character.

str: Good Python
ch: o --> 9

5. Check String is Palindrom or not without using any pre define function.


*/

#include<stdio.h>
#include<string.h>

void main()
{
    char s1[100];
    int length=0;
    printf("Enter a string: ");
    gets(s1);
    printf("String is %s",s1);
    // printf("\n%c",s1[2]);
   for(int i=0;s1[i]!='\0';i++)
   {
        length++;
   }
   printf("\nLength of string is: %d",length);
//    int vowel=0;
//    int con=0;

//    for(int i=0;i<length;i++)
//    {
//         if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
//         {
//             if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i' || s1[i]=='o' || s1[i]=='u'|| s1[i]=='A' || s1[i]=='E' || s1[i]=='I'|| s1[i]=='O' || s1[i]=='U'){
//                 vowel++;
//             }
//             else{
//                 con++;
//             }
//         }
//    }

//    printf("\nVowel: %d",vowel);
//    printf("\nConsonant: %d",con);

    int start=0;
    int end=length-1;

    while(start<=end)
    {
        if(s1[start]!=s1[end])
        {
            break;
        }
        start++;
        end--;
    }

    if(start>=end)
    {
        printf("\nPalindrom!!");
    }else{
        printf("\nNot Palindrom!!");
    }


}

/*

malayalam

Python




*/