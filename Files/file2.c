#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","r");
    char str[100];

    if(fp==NULL)
    {
        printf("can't open file!!");
    }else{

        while(!feof(fp))
        {
            fscanf(fp,"%s",str);
            printf("%s ",str);
        }
    }
}

/*

Make one file using C and add your details in that file.
name
id
address
college name
contact no

*/