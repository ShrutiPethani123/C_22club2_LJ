#include<stdio.h>

void main()
{
    FILE *fp;
    fp=fopen("abc.txt","r");
    char str[100]="Royal";
    char ch;

    if(fp==NULL)
    {
        printf("can't open file!!");
    }else{
        
        // while(!feof(fp)){
        //     ch = getc(fp);
        //     printf("%c",ch);
        // }

        while(!feof(fp)){
            fgets(str,100,fp);
            printf("%s\n",str);
        }
    }
}