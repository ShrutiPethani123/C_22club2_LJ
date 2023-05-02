#include<stdio.h>

void main()
{
    FILE *fp;
    fp=fopen("abc.txt","a");
    char str[100]="Royal";

    if(fp==NULL)
    {
        printf("can't open file!!");
    }else{
        putc('d',fp);
        putc('f',fp);

        char ch;
        printf("Enter character: ");
        scanf("%c",&ch);
        putc(ch,fp);
        putc(97,fp);
        putc('\n',fp);

        for(int i=0;i<strlen(str);i++){
            fputc(str[i],fp);
        }

        fputs("java123",fp);


    }
}